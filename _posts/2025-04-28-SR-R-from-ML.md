---
title: "Approximating neutron-star radii using gravitational-wave only measurements with symbolic regression" 
excerpt: "arXiv:2504.19962 A ML solution to connect EM observations - radii - with GW observations - tidal deformabilities and masses"
sitemap: true
usemath: false  
---

Gravitational waves emitted by binary neutron-star inspirals carry information on components' masses and tidal deformabilities, but not directly radii, which are measured by electromagnetic observations of neutron stars. To improve the multi-messenger astronomy studies of neutron stars, an expression for neutron-star radii as a function of gravitational-wave only data would be advantageous, as it would allow to compare information from two different channels. 

In order to do so, a symbolic regression method, [pySR](https://github.com/MilesCranmer/PySR), is trained on TOV solutions to piecewise polytropic EOS input to discover an approximate symbolic expression for the neutron-star radius as a function of gravitational-wave measurements only. The approximation is tested on piecewise polytropic EOS NS data, as well as on NS sequences based on selected realistic (non-polytropic) dense-matter theory EOSs, achieving consistent agreement between the ground truth values and the symbolic approximation for a broad range of NS parameters covering current astrophysical observations, with average radii differences of few hundred meters. Additionally, the approximation is applied to the [GW170817](https://en.wikipedia.org/wiki/GW170817) gravitational-wave mass and tidal deformability posteriors, and compared to reported inferred radius distributions.

See [arXiv:2504.19962](https://arxiv.org/abs/2504.19962) for the full paper.

