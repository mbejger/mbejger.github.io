---
title: "Convolutional neural network classifier for the output of the time-domain F-statistic"
excerpt: "Application of machine learning in all-sky search for continuous gravitational waves"
sitemap: true
usemath: false  
---

Our [recent work](https://arxiv.org/abs/1907.06917) is a study on the feasibility of application of 1D and 2D convolutional neural networks in classification of candidate signal distributions produced by the time-domain $\mathcal{F}$-statistic search ([all-sky implementation](https://github.com/mbejger/polgraw-allsky) used in our group): 

> Among the astrophysical sources in the Advanced Laser Interferometer Gravitational-Wave Observatory (LIGO) and Advanced Virgo detectors' frequency band are rotating non-axisymmetric neutron stars emitting long-lasting, almost-monochromatic gravitational waves. Searches for these continuous gravitational-wave signals are usually performed in long stretches of data in a matched-filter framework e.g. the $\mathcal{F}$-statistic method. In an all-sky search for a priori unknown sources, a large number of templates are matched against the data using a pre-defined grid of variables (the gravitational-wave frequency and its derivatives, sky coordinates), subsequently producing a collection of candidate signals, corresponding to the grid points at which the signal reaches a pre-defined signal-to-noise threshold. An astrophysical signature of the signal is encoded in the multi-dimensional vector distribution of the candidate signals. In the first work of this kind, we apply a deep learning approach to classify the distributions. We consider three basic classes: Gaussian noise, astrophysical gravitational-wave signal, and a constant-frequency detector artifact ('stationary line'), the two latter injected into the Gaussian noise. 1D and 2D versions of a convolutional neural network classifier are implemented, trained and tested on a broad range of signal frequencies. We demonstrate that these implementations correctly classify the instances of data at various signal-to-noise ratios and signal frequencies, while also showing concept generalization i.e. satisfactory performance at previously unseen frequencies. In addition we discuss the deficiencies, computational requirements and possible applications of these implementations. 

{% include image.html url="mlstab86c7f8_hr.jpg" description="Confusion matrix for the three-label classification evaluated on the test set for the 1D CNN (a) and 2D CNN (b) after the training. Although the <b>cgw</b> and the <b>noise</b> were classified on a similar level, the <b>line</b> caused significant problem for the 2D model. The majority of <b>line</b> instances resembled <b>noise</b> class in the image representation." %}



_Update 11.05.2020: accepted by the [MLST](https://iopscience.iop.org/article/10.1088/2632-2153/ab86c7)_!

### Direct links: 

* [arXiv:1907.06917](https://arxiv.org/abs/1907.06917) 
* [NASA ADS](https://ui.adsabs.harvard.edu/abs/2019arXiv190706917M/abstract)
* [Machine Learning: Science and Technology](https://iopscience.iop.org/article/10.1088/2632-2153/ab86c7) 

