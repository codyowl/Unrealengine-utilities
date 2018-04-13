// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Oculusrift_axisEditorTarget : TargetRules
{
	public Oculusrift_axisEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "Oculusrift_axis" } );
	}
}
