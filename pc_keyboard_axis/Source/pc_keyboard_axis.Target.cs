// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class pc_keyboard_axisTarget : TargetRules
{
	public pc_keyboard_axisTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "pc_keyboard_axis" } );
	}
}
