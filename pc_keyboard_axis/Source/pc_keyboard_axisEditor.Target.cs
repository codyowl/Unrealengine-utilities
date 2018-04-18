// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class pc_keyboard_axisEditorTarget : TargetRules
{
	public pc_keyboard_axisEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "pc_keyboard_axis" } );
	}
}
