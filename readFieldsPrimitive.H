    IOobject UHeader
    (
        "U",
        runTime.timeName(),
        mesh,
        IOobject::MUST_READ
    );

    if (!UHeader.typeHeaderOk<volVectorField>(true))
    {
        Info<< "    No U field" << endl;
        continue;
    }

    volVectorField U
    (
        UHeader,
        mesh
    );
    
 
#include      "createPhi.H"
singlePhaseTransportModel laminarTransport(U, phi);

autoPtr<incompressible::turbulenceModel> turbulence
(
    incompressible::turbulenceModel::New(U, phi, laminarTransport)
);    

dimensionedScalar eps2("VSMALL", dimensionSet(0, 2, -3, 0, 0, 0, 0), VSMALL);

volScalarField kolmogorovLengthScale
(
      IOobject
      (
            "kolmogorovLengthScale",
            runTime.timeName(),
            mesh,
            IOobject::NO_READ,
            IOobject::NO_WRITE
      ),
      mesh,
      dimensionedScalar("zero", dimensionSet(0, 1, 0, 0, 0, 0, 0), 0.0)
);          
    
volScalarField kolmogorovTimeScale
(
      IOobject
      (
            "kolmogorovTimeScale",
            runTime.timeName(),
            mesh,
            IOobject::NO_READ,
            IOobject::NO_WRITE
      ),
      mesh,
      dimensionedScalar("zero", dimensionSet(0, 0, 1, 0, 0, 0, 0), 0.0)
); 

    
// ----------------------------------------------------------------------------
    
    
    IOobject UTimeAveragedHeader
    (
        "UTimeAveraged",
        runTime.timeName(),
        mesh,
        IOobject::MUST_READ
    );

    if (!UTimeAveragedHeader.typeHeaderOk<volVectorField>(true))
    {
        Info<< "    No UTimeAveraged field" << endl;
        continue;
    }

    volVectorField UTimeAveraged
    (
        UTimeAveragedHeader,
        mesh
    );

// ----------------------------------------------------------------------------
      
    volScalarField pTimeAveraged
    (
        IOobject
        (
            "pTimeAveraged",
            runTime.timeName(),
            mesh,
            IOobject::MUST_READ
        ),
        mesh
    );

// ----------------------------------------------------------------------------

    IOobject vorticityTimeAveragedHeader
    (
        "vorticityTimeAveraged",
        runTime.timeName(),
        mesh,
        IOobject::MUST_READ
    );

    if (!vorticityTimeAveragedHeader.typeHeaderOk<volVectorField>(true))
    {
        Info<< "    No vorticityTimeAveraged field" << endl;
        continue;
    }

    volVectorField vorticityTimeAveraged
    (
        vorticityTimeAveragedHeader,
        mesh
    );
    
        
    volSymmTensorField vorticity2PrimeTimeAveraged
    (
        IOobject
        (
            "vorticity2PrimeTimeAveraged",
            runTime.timeName(),
            mesh,
            IOobject::MUST_READ
        ),
        mesh
    );
    volScalarField vorticity2PrimeTimeAveragedxx(vorticity2PrimeTimeAveraged.component(symmTensor::XX));
    volScalarField vorticity2PrimeTimeAveragedyy(vorticity2PrimeTimeAveraged.component(symmTensor::YY));
    volScalarField vorticity2PrimeTimeAveragedzz(vorticity2PrimeTimeAveraged.component(symmTensor::ZZ));
    volScalarField vorticity2PrimeTimeAveragedxy(vorticity2PrimeTimeAveraged.component(symmTensor::XY));
    
    
    


    /*
    volScalarField epsilonMean
    (
        IOobject
        (
            "epsilonMean",
            runTime.timeName(),
            mesh,
            IOobject::MUST_READ
        ),
        mesh
    );

    volScalarField nUTimeAveraged
    (
        IOobject
        (
            "nUTimeAveraged",
            runTime.timeName(),
            mesh,
            IOobject::MUST_READ
        ),
        mesh
    );

    volScalarField gammaDotMean
    (
        IOobject
        (
            "gammaDotMean",
            runTime.timeName(),
            mesh,
            IOobject::MUST_READ
        ),
        mesh
    );

    volScalarField nuPrime2
    (
        IOobject
        (
            "nuPrime",
            runTime.timeName(),
            mesh,
            IOobject::MUST_READ
        ),
        mesh
    );
    volScalarField nuPrime = sqrt(mag(nuPrime2 - sqr(nUTimeAveraged)));


    volScalarField gammaDotPrime2
    (
        IOobject
        (
            "gammaDotPrime",
            runTime.timeName(),
            mesh,
            IOobject::MUST_READ
        ),
        mesh
    );
    volScalarField gammaDotPrime = sqrt(mag(gammaDotPrime2 -sqr(gammaDotMean)));
    */
