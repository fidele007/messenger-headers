/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMPConfigurableFilter.h>

@protocol FBFilterAssetManaging, FBMPMSQRDFilterDelegate;
@class FBMPVideoProcessorFilter;

@interface FBMPMSQRDFilter : FBMPConfigurableFilter {

	FBMPVideoProcessorFilter* _processorFilter;
	id<FBFilterAssetManaging> _assetManager;
	BOOL _prepared;
	BOOL _isStillImageState;
	id<FBMPMSQRDFilterDelegate> _delegate;

}

@property (__weak) id<FBMPMSQRDFilterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)newWithAssetManager:(id)arg1 config:(id)arg2 ;
-(void)sessionWillStart:(id)arg1 ;
-(void)sessionConnectedPort:(id)arg1 context:(id)arg2 ;
-(void)sessionDisconnectedPort:(id)arg1 context:(id)arg2 ;
-(void)_onNewData:(id)arg1 ;
-(void)_prepareVideoProcessorIfNeededWithContext:(id)arg1 ;
-(void)_registerForVideoProcessorFilterNotifications;
-(void)_handleVideoProcessorFilterNotification:(id)arg1 ;
-(void)setDelegate:(id<FBMPMSQRDFilterDelegate>)arg1 ;
-(void)dealloc;
-(id<FBMPMSQRDFilterDelegate>)delegate;
@end

