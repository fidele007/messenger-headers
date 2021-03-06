/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ASDisplayNode.h>
#import <Messenger/FBExpandabilityHookProtocol.h>

@interface FBExpandableNode : ASDisplayNode <FBExpandabilityHookProtocol> {

	double _expansionProgress;
	unsigned long long _expansionState;
	unsigned long long _previousExpansionState;

}

@property (nonatomic,readonly) double expansionProgress;                               //@synthesize expansionProgress=_expansionProgress - In the implementation block
@property (assign,nonatomic) unsigned long long expansionState;                        //@synthesize expansionState=_expansionState - In the implementation block
@property (nonatomic,readonly) unsigned long long previousExpansionState;              //@synthesize previousExpansionState=_previousExpansionState - In the implementation block
-(void)_staticInitialize;
-(void)willExpandWithAnimationConfiguration:(SCD_Struct_FB70)arg1 ;
-(void)willCollapseWithAnimationConfiguration:(SCD_Struct_FB70)arg1 ;
-(unsigned long long)expansionState;
-(void)didBeginExpansionInteractionAtPoint:(CGPoint)arg1 ;
-(void)didUpdateExpansionInteractionAtPoint:(CGPoint)arg1 ;
-(void)didCollapse;
-(void)didExpand;
-(void)setExpansionState:(unsigned long long)arg1 ;
-(void)didUpdateForExpansionProgress:(double)arg1 ;
-(double)expansionProgress;
-(unsigned long long)previousExpansionState;
@end

