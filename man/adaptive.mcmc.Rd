% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/mcmc.R
\name{adaptive.mcmc}
\alias{adaptive.mcmc}
\title{Adaptive MCMC algorithm}
\usage{
adaptive.mcmc(lprior, llikelihood, nburn, initial, nbatch, blen = 1,
  outfun = NULL, acceptfun = NULL, verbose = FALSE, ...)
}
\arguments{
\item{lprior}{A function returning the log prior probability of the parameters}

\item{llikelihood}{A function returning the log likelihood of the parameters given the data}

\item{nburn}{Number of iterations of burn in}

\item{initial}{Vector with starting parameter values}

\item{nbatch}{Number of batches to run (number of samples to return)}

\item{blen}{Length of each batch}

\item{outfun}{A function that is called for each batch. Can be useful to log certain values.}

\item{acceptfun}{A function that is called whenever a sample is accepted.}

\item{verbose}{Output debugging information}

\item{...}{Extra parameters passed to the log likelihood function}
}
\value{
Returns a list with the accepted samples and the corresponding llikelihood values and the return of the optional outfun
}
\description{
MCMC which adapts its proposal distribution for faster convergence following:
Sherlock, C., Fearnhead, P. and Roberts, G.O. The Random Walk Metrolopois: Linking Theory and Practice Through a Case Study. Statistical Science 25, no.2 (2010): 172-190.
}
\seealso{
\code{\link{adaptive.mcmc.cpp}} Used internally by this function.
}
