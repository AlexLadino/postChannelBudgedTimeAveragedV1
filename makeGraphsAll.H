
const scalarField& y = channelIndexing.y();

makeGraph(y, UTimeAveragedXvalues, "Uf", path, gFormat);   
makeGraph(y, urmsValues, "urms", path, gFormat);
makeGraph(y, vrmsValues, "vrms", path, gFormat);
makeGraph(y, wrmsValues, "wrms", path, gFormat);
makeGraph(y, kValues, "k", path, gFormat);    

makeGraph(y, vorticityTimeAveragedZvalues, "wz", path, gFormat);    
makeGraph(y, vorticityxrmsValues, "wxrms", path, gFormat);
makeGraph(y, vorticityyrmsValues, "wyrms", path, gFormat);
makeGraph(y, vorticityzrmsValues, "wzrms", path, gFormat);

makeGraph(y, pTimeAveragedValues, "p", path, gFormat);

// ----------------------------------------------------------------------------
makeGraph(y, dissipationTKETimeAveragedValues, "Ek", path, gFormat);
makeGraph(y, pressureDiffusionTKETimeAveragedValues, "PIDk", path, gFormat);
makeGraph(y, pressureStrainTKETimeAveragedValues, "PISk", path, gFormat);
makeGraph(y, prodTKETimeAveragedValues, "Pk", path, gFormat);
makeGraph(y, turbulenceTransportTKETimeAveragedValues, "Tk", path, gFormat);
makeGraph(y, viscousDiffusionTKETimeAveragedValues, "Dk", path, gFormat);
// ----------------------------------------------------------------------------
makeGraph(y, dissipationNumericalTimeAveragedValues, "Enum", path, gFormat);
makeGraph(y, nuNumericalTimeAveragedValues, "nuNum", path, gFormat);
makeGraph(y, QDNSIndexTimeAveragedValues, "QDNSInd", path, gFormat);
// ----------------------------------------------------------------------------
makeGraph(y, RTimeAveragedxxValues, "Rxx", path, gFormat);
makeGraph(y, RTimeAveragedxyValues, "Ryy", path, gFormat);
makeGraph(y, RTimeAveragedzzValues, "Rzz", path, gFormat);
makeGraph(y, RTimeAveragedxyValues, "Rxy", path, gFormat);
// ----------------------------------------------------------------------------
makeGraph(y, DDtReynoldsStressTimeAveragedxxValues, "DDtRxx", path, gFormat);
makeGraph(y, DDtReynoldsStressTimeAveragedxyValues, "DDtRyy", path, gFormat);
makeGraph(y, DDtReynoldsStressTimeAveragedzzValues, "DDtRzz", path, gFormat);
makeGraph(y, DDtReynoldsStressTimeAveragedxyValues, "DDtRxy", path, gFormat);
// ----------------------------------------------------------------------------
makeGraph(y, dissipationTimeAveragedxxValues, "Exx", path, gFormat);
makeGraph(y, dissipationTimeAveragedxyValues, "Eyy", path, gFormat);
makeGraph(y, dissipationTimeAveragedzzValues, "Ezz", path, gFormat);
makeGraph(y, dissipationTimeAveragedxyValues, "Exy", path, gFormat);
// ----------------------------------------------------------------------------
makeGraph(y, molDiffTimeAveragedxxValues, "Dxx", path, gFormat);
makeGraph(y, molDiffTimeAveragedxyValues, "Dyy", path, gFormat);
makeGraph(y, molDiffTimeAveragedzzValues, "Dzz", path, gFormat);
makeGraph(y, molDiffTimeAveragedxyValues, "Dxy", path, gFormat);
// ----------------------------------------------------------------------------
makeGraph(y, pDiffTimeAveragedxxValues, "PIDxx", path, gFormat);
makeGraph(y, pDiffTimeAveragedxyValues, "PIDyy", path, gFormat);
makeGraph(y, pDiffTimeAveragedzzValues, "PIDzz", path, gFormat);
makeGraph(y, pDiffTimeAveragedxyValues, "PIDxy", path, gFormat);
// ----------------------------------------------------------------------------
makeGraph(y, prodTimeAveragedxxValues, "Pxx", path, gFormat);
makeGraph(y, prodTimeAveragedxyValues, "Pyy", path, gFormat);
makeGraph(y, prodTimeAveragedzzValues, "Pzz", path, gFormat);
makeGraph(y, prodTimeAveragedxyValues, "Pxy", path, gFormat);
// ----------------------------------------------------------------------------
makeGraph(y, pStrainTimeAveragedxxValues, "PISxx", path, gFormat);
makeGraph(y, pStrainTimeAveragedxyValues, "PISyy", path, gFormat);
makeGraph(y, pStrainTimeAveragedzzValues, "PISzz", path, gFormat);
makeGraph(y, pStrainTimeAveragedxyValues, "PISxy", path, gFormat);
// ----------------------------------------------------------------------------
makeGraph(y, turbTransTimeAveragedxxValues, "Txx", path, gFormat);
makeGraph(y, turbTransTimeAveragedxyValues, "Tyy", path, gFormat);
makeGraph(y, turbTransTimeAveragedzzValues, "Tzz", path, gFormat);
makeGraph(y, turbTransTimeAveragedxyValues, "Txy", path, gFormat);
// ----------------------------------------------------------------------------
makeGraph(y, kolmogorovLengthScaleValues, "nuK", path, gFormat);
makeGraph(y, kolmogorovTimeScaleValues, "tauK", path, gFormat);



/*
makeGraph(y, epsilonValues, "epsilon", path, gFormat);
makeGraph(y, nuMeanValues, "nu", path, gFormat);
makeGraph(y, nuPrimeValues, "nuPrime", path, gFormat);
makeGraph(y, gammaDotMeanValues, "gammaDot", path, gFormat);
makeGraph(y, gammaDotPrimeValues, "gammaDotPrime", path, gFormat);
*/
