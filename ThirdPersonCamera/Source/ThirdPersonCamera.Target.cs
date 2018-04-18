// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class ThirdPersonCameraTarget : TargetRules
{
	public ThirdPersonCameraTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "ThirdPersonCamera" } );
	}
}
