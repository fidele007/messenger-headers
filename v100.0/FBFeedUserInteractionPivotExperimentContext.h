/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBFeedUserInteractionPivotExperimentContext : FBExperimentContext {

	BOOL _showComposerOnReactions;
	BOOL _showComposerOnLikeTap;
	BOOL _showComposerOnVideoTap;
	BOOL _showComposerOnPhotoTap;

}

@property (assign,nonatomic) BOOL showComposerOnReactions;              //@synthesize showComposerOnReactions=_showComposerOnReactions - In the implementation block
@property (assign,nonatomic) BOOL showComposerOnLikeTap;                //@synthesize showComposerOnLikeTap=_showComposerOnLikeTap - In the implementation block
@property (assign,nonatomic) BOOL showComposerOnVideoTap;               //@synthesize showComposerOnVideoTap=_showComposerOnVideoTap - In the implementation block
@property (assign,nonatomic) BOOL showComposerOnPhotoTap;               //@synthesize showComposerOnPhotoTap=_showComposerOnPhotoTap - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)showComposerOnLikeTap;
-(BOOL)showComposerOnPhotoTap;
-(BOOL)showComposerOnReactions;
-(BOOL)showComposerOnVideoTap;
-(void)setShowComposerOnReactions:(BOOL)arg1 ;
-(void)setShowComposerOnLikeTap:(BOOL)arg1 ;
-(void)setShowComposerOnVideoTap:(BOOL)arg1 ;
-(void)setShowComposerOnPhotoTap:(BOOL)arg1 ;
@end

