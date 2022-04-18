fileName path(UTimeAveraged.rootPath()/UTimeAveraged.caseName()/"graphs"/UTimeAveraged.instance());
mkDir(path);

scalarField UTimeAveragedXvalues
(
  channelIndexing.collapse(UTimeAveraged.component(vector::X)())
);

scalarField UTimeAveragedYvalues
(
  channelIndexing.collapse(UTimeAveraged.component(vector::Y)())
);

scalarField UTimeAveragedZvalues
(
  channelIndexing.collapse(UTimeAveraged.component(vector::Z)())
);

scalarField pTimeAveragedValues(channelIndexing.collapse(pTimeAveraged));
// ---------------------------------------------------------------------------
scalarField vorticityTimeAveragedXvalues
(
  channelIndexing.collapse(vorticityTimeAveraged.component(vector::X)())
);

scalarField vorticityTimeAveragedYvalues
(
  channelIndexing.collapse(vorticityTimeAveraged.component(vector::Y)())
);

scalarField vorticityTimeAveragedZvalues
(
  channelIndexing.collapse(vorticityTimeAveraged.component(vector::Z)())
);

scalarField vorticity2PrimeTimeAveragedxxValues(channelIndexing.collapse(vorticity2PrimeTimeAveragedxx));
scalarField vorticity2PrimeTimeAveragedyyValues(channelIndexing.collapse(vorticity2PrimeTimeAveragedyy));
scalarField vorticity2PrimeTimeAveragedzzValues(channelIndexing.collapse(vorticity2PrimeTimeAveragedzz));
scalarField vorticity2PrimeTimeAveragedxyValues(channelIndexing.collapse(vorticity2PrimeTimeAveragedxy, true));
//  --------------------------------------------------------------------------
scalarField dissipationTKETimeAveragedValues(channelIndexing.collapse(dissipationTKETimeAveraged));
scalarField pressureDiffusionTKETimeAveragedValues(channelIndexing.collapse(pressureDiffusionTKETimeAveraged));
scalarField pressureStrainTKETimeAveragedValues(channelIndexing.collapse(pressureStrainTKETimeAveraged));
scalarField prodTKETimeAveragedValues(channelIndexing.collapse(prodTKETimeAveraged));
scalarField turbulenceTransportTKETimeAveragedValues(channelIndexing.collapse(turbulenceTransportTKETimeAveraged));
scalarField viscousDiffusionTKETimeAveragedValues(channelIndexing.collapse(viscousDiffusionTKETimeAveraged));
// ----------------------------------------------------------------------------
scalarField dissipationNumericalTimeAveragedValues(channelIndexing.collapse(dissipationNumericalTimeAveraged));
scalarField nuNumericalTimeAveragedValues(channelIndexing.collapse(nuNumericalTimeAveraged));
scalarField QDNSIndexTimeAveragedValues(channelIndexing.collapse(QDNSIndexTimeAveraged));  
// ----------------------------------------------------------------------------
scalarField RTimeAveragedxxValues(channelIndexing.collapse(RTimeAveragedxx));
scalarField RTimeAveragedyyValues(channelIndexing.collapse(RTimeAveragedyy));
scalarField RTimeAveragedzzValues(channelIndexing.collapse(RTimeAveragedzz));
scalarField RTimeAveragedxyValues(channelIndexing.collapse(RTimeAveragedxy, true));
// ----------------------------------------------------------------------------
scalarField DDtReynoldsStressTimeAveragedxxValues(channelIndexing.collapse(DDtReynoldsStressTimeAveragedxx));
scalarField DDtReynoldsStressTimeAveragedyyValues(channelIndexing.collapse(DDtReynoldsStressTimeAveragedyy));
scalarField DDtReynoldsStressTimeAveragedzzValues(channelIndexing.collapse(DDtReynoldsStressTimeAveragedzz));
scalarField DDtReynoldsStressTimeAveragedxyValues(channelIndexing.collapse(DDtReynoldsStressTimeAveragedxy, true));
// ----------------------------------------------------------------------------
scalarField dissipationTimeAveragedxxValues(channelIndexing.collapse(dissipationTimeAveragedxx));
scalarField dissipationTimeAveragedyyValues(channelIndexing.collapse(dissipationTimeAveragedyy));
scalarField dissipationTimeAveragedzzValues(channelIndexing.collapse(dissipationTimeAveragedzz));
scalarField dissipationTimeAveragedxyValues(channelIndexing.collapse(dissipationTimeAveragedxy, true));
// ----------------------------------------------------------------------------
scalarField molDiffTimeAveragedxxValues(channelIndexing.collapse(molDiffTimeAveragedxx));
scalarField molDiffTimeAveragedyyValues(channelIndexing.collapse(molDiffTimeAveragedyy));
scalarField molDiffTimeAveragedzzValues(channelIndexing.collapse(molDiffTimeAveragedzz));
scalarField molDiffTimeAveragedxyValues(channelIndexing.collapse(molDiffTimeAveragedxy, true));
// ----------------------------------------------------------------------------
scalarField pDiffTimeAveragedxxValues(channelIndexing.collapse(pDiffTimeAveragedxx));
scalarField pDiffTimeAveragedyyValues(channelIndexing.collapse(pDiffTimeAveragedyy));
scalarField pDiffTimeAveragedzzValues(channelIndexing.collapse(pDiffTimeAveragedzz));
scalarField pDiffTimeAveragedxyValues(channelIndexing.collapse(pDiffTimeAveragedxy, true));
// ----------------------------------------------------------------------------
scalarField prodTimeAveragedxxValues(channelIndexing.collapse(prodTimeAveragedxx));
scalarField prodTimeAveragedyyValues(channelIndexing.collapse(prodTimeAveragedyy));
scalarField prodTimeAveragedzzValues(channelIndexing.collapse(prodTimeAveragedzz));
scalarField prodTimeAveragedxyValues(channelIndexing.collapse(prodTimeAveragedxy, true));
// ----------------------------------------------------------------------------
scalarField pStrainTimeAveragedxxValues(channelIndexing.collapse(pStrainTimeAveragedxx));
scalarField pStrainTimeAveragedyyValues(channelIndexing.collapse(pStrainTimeAveragedyy));
scalarField pStrainTimeAveragedzzValues(channelIndexing.collapse(pStrainTimeAveragedzz));
scalarField pStrainTimeAveragedxyValues(channelIndexing.collapse(pStrainTimeAveragedxy, true));
// ----------------------------------------------------------------------------
scalarField turbTransTimeAveragedxxValues(channelIndexing.collapse(turbTransTimeAveragedxx));
scalarField turbTransTimeAveragedyyValues(channelIndexing.collapse(turbTransTimeAveragedyy));
scalarField turbTransTimeAveragedzzValues(channelIndexing.collapse(turbTransTimeAveragedzz));
scalarField turbTransTimeAveragedxyValues(channelIndexing.collapse(turbTransTimeAveragedxy, true));    

/*
scalarField epsilonValues(channelIndexing.collapse(epsilonMean));

scalarField nuMeanValues(channelIndexing.collapse(nuMean));
scalarField nuPrimeValues(channelIndexing.collapse(nuPrime));

scalarField gammaDotMeanValues(channelIndexing.collapse(gammaDotMean));
scalarField gammaDotPrimeValues(channelIndexing.collapse(gammaDotPrime));
*/

scalarField urmsValues(sqrt(mag(RTimeAveragedxxValues)));
scalarField vrmsValues(sqrt(mag(RTimeAveragedyyValues)));
scalarField wrmsValues(sqrt(mag(RTimeAveragedzzValues)));

scalarField kValues
(
      0.5*(sqr(urmsValues) + sqr(vrmsValues) + sqr(wrmsValues))
);

scalarField vorticityxrmsValues(sqrt(mag(vorticity2PrimeTimeAveragedxxValues)));
scalarField vorticityyrmsValues(sqrt(mag(vorticity2PrimeTimeAveragedyyValues)));
scalarField vorticityzrmsValues(sqrt(mag(vorticity2PrimeTimeAveragedzzValues)));

scalarField kolmogorovLengthScaleValues(channelIndexing.collapse(kolmogorovLengthScale));
scalarField kolmogorovTimeScaleValues(channelIndexing.collapse(kolmogorovTimeScale));

