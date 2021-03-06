% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{as_age_group}
\alias{as_age_group}
\title{Age as age group}
\usage{
as_age_group(age, limits = as.numeric(c(1, 5, 15, 25, 45, 65)))
}
\arguments{
\item{age}{The relevant age}

\item{limits}{The upper limit to each age groups (not included) (1,5,15,25,45,65) corresponds to the following age groups: <1, 1-4, 5-14, 15-24, 25-44, 45-64 and >=65.}
}
\value{
An integer representing the age group
}
\description{
Returns the age group a certain age belongs to given the upper age group limits
}
