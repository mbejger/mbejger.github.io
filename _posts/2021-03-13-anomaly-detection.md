---
title: "Anomaly detection in gravitational waves data using convolutional autoencoders"
excerpt: "GWs as unusual features in the data"
sitemap: true
usemath: false  
---

This [work](https://arxiv.org/abs/2103.07688) ([now published](https://iopscience.iop.org/article/10.1088/2632-2153/abf3d0) at the Machine Learning: Science and Technology) studies the GW detection problem from the point of view of detecting anomalies. The anomalies we study are transient signals, different from the slow non-stationary noise of the detector. Presented in the manuscript anomalies are mostly based on the GW emitted by the mergers of binary black hole systems. However, the presented study of anomalies is not limited only to GW alone, but also includes glitches occurring in the real LIGO/Virgo dataset available at the [Gravitational Waves Open Science Center](https://www.gw-openscience.org/data/).

The algorithm of choice is a relatively simple and easy to train one-dimensional convolutional neural network (CNN) in the auto-encoder (AE) configuration. The AE is trained on noise, and its reaction on the anomaly is an expected sign of something unusual in the data. 

{% include image.html url="2103.07688_fig14.png" description="Test of the CNN-AE on the dataset containing confirmed detections using L1 and H1 datasets for GW150914 (four upper plots), GW170608 (four middle plots) and GW170814 (four bottom plots). Left plots: spectrograms presenting the relation between frequency and time for the segment of real data containing GW. Right plots: the difference between the CNN-AE predictions and the input data." %} 

### Direct links: 

* [arXiv:2103.07688](https://arxiv.org/abs/2103.07688) 
* [NASA ADS](https://ui.adsabs.harvard.edu/abs/2021arXiv210307688M/abstract) 

