    volScalarField dissipationNumericalTimeAveraged
    (
        IOobject
        (
            "dissipationNumericalTimeAveraged",
            runTime.timeName(),
            mesh,
            IOobject::MUST_READ
        ),
        mesh
    );

// ----------------------------------------------------------------------------

    volScalarField nuNumericalTimeAveraged
    (
        IOobject
        (
            "nuNumericalTimeAveraged",
            runTime.timeName(),
            mesh,
            IOobject::MUST_READ
        ),
        mesh
    );
        
// ----------------------------------------------------------------------------

    volScalarField QDNSIndexTimeAveraged
    (
        IOobject
        (
            "QDNSIndexTimeAveraged",
            runTime.timeName(),
            mesh,
            IOobject::MUST_READ
        ),
        mesh
    );
    