    volSymmTensorField RTimeAveraged
    (
        IOobject
        (
            "RTimeAveraged",
            runTime.timeName(),
            mesh,
            IOobject::MUST_READ
        ),
        mesh
    );
    volScalarField RTimeAveragedxx(RTimeAveraged.component(symmTensor::XX));
    volScalarField RTimeAveragedyy(RTimeAveraged.component(symmTensor::YY));
    volScalarField RTimeAveragedzz(RTimeAveraged.component(symmTensor::ZZ));
    volScalarField RTimeAveragedxy(RTimeAveraged.component(symmTensor::XY));
    
// -----------------------------------------------------------------------------------------

    volSymmTensorField DDtReynoldsStressTimeAveraged
    (
        IOobject
        (
            "DDtReynoldsStressTimeAveraged",
            runTime.timeName(),
            mesh,
            IOobject::MUST_READ
        ),
        mesh
    );
    volScalarField DDtReynoldsStressTimeAveragedxx(DDtReynoldsStressTimeAveraged.component(symmTensor::XX));
    volScalarField DDtReynoldsStressTimeAveragedyy(DDtReynoldsStressTimeAveraged.component(symmTensor::YY));
    volScalarField DDtReynoldsStressTimeAveragedzz(DDtReynoldsStressTimeAveraged.component(symmTensor::ZZ));
    volScalarField DDtReynoldsStressTimeAveragedxy(DDtReynoldsStressTimeAveraged.component(symmTensor::XY));
    
// -----------------------------------------------------------------------------------------

    volSymmTensorField dissipationTimeAveraged
    (
        IOobject
        (
            "dissipationTimeAveraged",
            runTime.timeName(),
            mesh,
            IOobject::MUST_READ
        ),
        mesh
    );
    volScalarField dissipationTimeAveragedxx(dissipationTimeAveraged.component(symmTensor::XX));
    volScalarField dissipationTimeAveragedyy(dissipationTimeAveraged.component(symmTensor::YY));
    volScalarField dissipationTimeAveragedzz(dissipationTimeAveraged.component(symmTensor::ZZ));
    volScalarField dissipationTimeAveragedxy(dissipationTimeAveraged.component(symmTensor::XY));
    
// --------------------------------------------------------------------------------

    volSymmTensorField molDiffTimeAveraged
    (
        IOobject
        (
            "molDiffTimeAveraged",
            runTime.timeName(),
            mesh,
            IOobject::MUST_READ
        ),
        mesh
    );
    volScalarField molDiffTimeAveragedxx(molDiffTimeAveraged.component(symmTensor::XX));
    volScalarField molDiffTimeAveragedyy(molDiffTimeAveraged.component(symmTensor::YY));
    volScalarField molDiffTimeAveragedzz(molDiffTimeAveraged.component(symmTensor::ZZ));
    volScalarField molDiffTimeAveragedxy(molDiffTimeAveraged.component(symmTensor::XY));        

// -------------------------------------------------------------------------------------

    volSymmTensorField pDiffTimeAveraged
    (
        IOobject
        (
            "pDiffTimeAveraged",
            runTime.timeName(),
            mesh,
            IOobject::MUST_READ
        ),
        mesh
    );
    volScalarField pDiffTimeAveragedxx(pDiffTimeAveraged.component(symmTensor::XX));
    volScalarField pDiffTimeAveragedyy(pDiffTimeAveraged.component(symmTensor::YY));
    volScalarField pDiffTimeAveragedzz(pDiffTimeAveraged.component(symmTensor::ZZ));
    volScalarField pDiffTimeAveragedxy(pDiffTimeAveraged.component(symmTensor::XY));
    
// -----------------------------------------------------------------------------------------

    volSymmTensorField prodTimeAveraged
    (
        IOobject
        (
            "prodTimeAveraged",
            runTime.timeName(),
            mesh,
            IOobject::MUST_READ
        ),
        mesh
    );
    volScalarField prodTimeAveragedxx(prodTimeAveraged.component(symmTensor::XX));
    volScalarField prodTimeAveragedyy(prodTimeAveraged.component(symmTensor::YY));
    volScalarField prodTimeAveragedzz(prodTimeAveraged.component(symmTensor::ZZ));
    volScalarField prodTimeAveragedxy(prodTimeAveraged.component(symmTensor::XY));
    
// -----------------------------------------------------------------------------------------
    volSymmTensorField pStrainTimeAveraged
    (
        IOobject
        (
            "pStrainTimeAveraged",
            runTime.timeName(),
            mesh,
            IOobject::MUST_READ
        ),
        mesh
    );
    volScalarField pStrainTimeAveragedxx(pStrainTimeAveraged.component(symmTensor::XX));
    volScalarField pStrainTimeAveragedyy(pStrainTimeAveraged.component(symmTensor::YY));
    volScalarField pStrainTimeAveragedzz(pStrainTimeAveraged.component(symmTensor::ZZ));
    volScalarField pStrainTimeAveragedxy(pStrainTimeAveraged.component(symmTensor::XY));
    
// -----------------------------------------------------------------------------------------
 
    volSymmTensorField turbTransTimeAveraged
    (
        IOobject
        (
            "turbTransTimeAveraged",
            runTime.timeName(),
            mesh,
            IOobject::MUST_READ
        ),
        mesh
    );
    volScalarField turbTransTimeAveragedxx(turbTransTimeAveraged.component(symmTensor::XX));
    volScalarField turbTransTimeAveragedyy(turbTransTimeAveraged.component(symmTensor::YY));
    volScalarField turbTransTimeAveragedzz(turbTransTimeAveraged.component(symmTensor::ZZ));
    volScalarField turbTransTimeAveragedxy(turbTransTimeAveraged.component(symmTensor::XY));
    
// -----------------------------------------------------------------------------------------

 
    