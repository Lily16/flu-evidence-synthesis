% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{stratify_by_risk}
\alias{stratify_by_risk}
\title{Stratify age groups into different risk groups}
\usage{
stratify_by_risk(age_groups, risk)
}
\arguments{
\item{age_groups}{A vector containing the population size of each age group}

\item{risk}{A matrix with the fraction in the risk groups. The leftover fraction is assumed to be low risk}
}
\value{
A vector with the population in the low risk groups, followed by the other risk groups. The length is equal to the number of age groups times the number of risk groups (including the low risk group).
}
\description{
Stratifies the age groups and returns the population size of each age group and risk group.
}
