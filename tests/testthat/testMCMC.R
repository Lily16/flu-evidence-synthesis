context("MCMC")

test_that("We can run adaptive MCMC", 
  {
      set.seed(100)
      the.data <- rnorm(100,1,0.3)
      lprior <- function(pars) 
      {
          dunif(pars[1],-5,5,TRUE) + dunif(pars[2],0,5,TRUE)
      }

      llikelihood <- function(pars)
      {
          if (pars[2]<=0)
              return(-Inf)
          sum( sapply(the.data, function(x) dnorm(x,pars[1],pars[2], TRUE )))
      }

      mcmc.result <- adaptive.mcmc(lprior,llikelihood,5000,c(0,1),1000,10)
      expect_equal( length(mcmc.result$llikelihoods), 1000 )
      expect_equal( nrow(mcmc.result$batch), 1000 )
      expect_equal( ncol(mcmc.result$batch), 2 )
      expect_lt(abs(-24-mean(mcmc.result$llikelihoods)),0.1)
      expect_lt(abs(1-mean(mcmc.result$batch[,1])), 0.004)
      expect_lt(abs(0.3-mean(mcmc.result$batch[,2])), 0.015)
  }
)

test_that("We can run pass extra parameters for the likelihood function to adaptive MCMC", 
  {
      set.seed(100)
      the.data <- rnorm(100,1,0.3)
      lprior <- function(pars) 
      {
          dunif(pars[1],-5,5,TRUE) + dunif(pars[2],0,5,TRUE)
      }

      llikelihood <- function(pars, mcmc.data)
      {
          if (pars[2]<=0)
              return(-Inf)
          sum( sapply(mcmc.data, function(x) dnorm(x,pars[1],pars[2], TRUE )))
      }

      mcmc.result <- adaptive.mcmc( lprior,llikelihood,5000,c(0,1),1000,10, mcmc.data=the.data )
      expect_equal( length(mcmc.result$llikelihoods), 1000 )
      expect_equal( nrow(mcmc.result$batch), 1000 )
      expect_equal( ncol(mcmc.result$batch), 2 )
      expect_lt(abs(-24-mean(mcmc.result$llikelihoods)),0.1)
      expect_lt(abs(1-mean(mcmc.result$batch[,1])), 0.004)
      expect_lt(abs(0.3-mean(mcmc.result$batch[,2])), 0.015)
  }
)

test_that("We can use the output function", 
  {
      set.seed(100)
      the.data <- rnorm(100,1,0.3)
      lprior <- function(pars) 
      {
          dunif(pars[1],-5,5,TRUE) + dunif(pars[2],0,5,TRUE)
      }

      llikelihood <- function(pars)
      {
          if (pars[2]<=0)
              return(-Inf)
          sum( sapply(the.data, function(x) dnorm(x,pars[1],pars[2], TRUE )))
      }

      outs <- c()
      id <- 1
      
      outfun <- function() {
          outs <<- c(outs, id)
          id <<- id + 1
      }

      mcmc.result <- adaptive.mcmc(lprior,llikelihood,5000,c(0,1),1000,10, outfun = outfun)
      
      expect_false(is.null(outs)) 
      expect_equal(length(outs), 1000)
      expect_equal(outs[1], 1)
      expect_equal(outs[100], 100)
      
      expect_equal( length(mcmc.result$llikelihoods), 1000 )
      expect_equal( nrow(mcmc.result$batch), 1000 )
      expect_equal( ncol(mcmc.result$batch), 2 )
      expect_lt(abs(-24-mean(mcmc.result$llikelihoods)),0.2)
      expect_lt(abs(1-mean(mcmc.result$batch[,1])), 0.004)
      expect_lt(abs(0.3-mean(mcmc.result$batch[,2])), 0.015)
  }
)

test_that("We can use the accept function", 
  {
      set.seed(100)
      the.data <- rnorm(100,1,0.3)
      lprior <- function(pars) 
      {
          dunif(pars[1],-5,5,TRUE) + dunif(pars[2],0,5,TRUE)
      }

      llikelihood <- function(pars)
      {
          if (pars[2]<=0)
              return(-Inf)
          sum( sapply(the.data, function(x) dnorm(x,pars[1],pars[2], TRUE )))
      }

      outs <- c()
      id <- 1
      
      acceptfun <- function() {
          outs <<- c(outs, id)
          id <<- id + 1
      }

      mcmc.result <- adaptive.mcmc(lprior,llikelihood,5000,c(0,1),1000,10, acceptfun = acceptfun)
      
      expect_false(is.null(outs)) 
      expect_lte(length(outs), 6000)
      expect_gt(length(outs), 0)
      expect_equal(outs[1], 1)
      expect_equal(outs[2], 2)
      
      expect_equal( length(mcmc.result$llikelihoods), 1000 )
      expect_equal( nrow(mcmc.result$batch), 1000 )
      expect_equal( ncol(mcmc.result$batch), 2 )
      expect_lt(abs(-24-mean(mcmc.result$llikelihoods)),0.2)
      expect_lt(abs(1-mean(mcmc.result$batch[,1])), 0.004)
      expect_lt(abs(0.3-mean(mcmc.result$batch[,2])), 0.015)
  }
)
