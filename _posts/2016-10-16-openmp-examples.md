---
title: "OpenMP, a gentle start to parallelisation"
excerpt: "Parallel programming in few examples"
sitemap: true
usemath: false  
---

OpenMP is a nice, relatively simple and ubiquitous interface to start with the parallel programming. With a few learning-by-doing examples in C I introduce the 

  * [threads](../data/1-openmp-helloworld)  
  * [getinfo](../data/2-openmp-getinfo) 

and 

  * [work sharing between the threads](../data/3-openmp-workshare). 

With these one can play with the typical useful algorithms, like  

  * searching for the [maximum by reduction](../data/4-openmp-reduction-max) 
  * study the speed up with parallel [reduction algorithms for sums](../data/5-openmp-reduction) 
  * perform a simple [prefix sum scan](../data/6-openmp-prefix-scan). 

There is also a small code that compares the parallel and simple [FFT](../data/7-openmp-fourier) execution. 

# Other links: 

* Full [OpenMP tutorial](https://computing.llnl.gov/tutorials/openMP)

