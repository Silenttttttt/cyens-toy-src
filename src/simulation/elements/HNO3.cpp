#include "simulation/ElementCommon.h"
//#TPT-Directive ElementClass Element_HNO3 PT_HNO3 201
Element_HNO3::Element_HNO3()
{
	Identifier = "DEFAULT_PT_HNO3";
	Name = "HNO3";
	FullName = "Nitric Acid";
	Colour = PIXPACK(0x707065);
	MenuVisible = 1;
	MenuSection = SC_LIQUID;
	Enabled = 1;

	Advection = 0.6f;
	AirDrag = 0.01f * CFDS;
	AirLoss = 0.98f;
	Loss = 0.95f;
	Collision = 0.0f;
	Gravity = 0.1f;
	Diffusion = 0.00f;
	HotAir = 0.000f	* CFDS;
	Falldown = 2;

	Flammable = 0;
	Explosive = 0;
	Meltable = 0;
	Hardness = 20;

	Weight = 30;

	Temperature = R_TEMP + 0.0f + 273.15f;
	HeatConduct = 251;
	Description = "Nitric Acid (HNO3), used to manufacture explosives and oxidize rocket fuel.";

	Properties = TYPE_LIQUID | PROP_DEADLY;

	LowPressure = IPL;
	LowPressureTransition = NT;
	HighPressure = IPH;
	HighPressureTransition = NT;
	LowTemperature = ITL;
	LowTemperatureTransition = NT;
	HighTemperature = ITH;
	HighTemperatureTransition = NT;

	Update = &Element_ACID::update;
}

Element_HNO3::~Element_HNO3() {}