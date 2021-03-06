/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMediaVideoManagerDelegate;
#import <Messenger/Messenger-Structs.h>
@class FBUserSession;

@interface FBMediaVideoManager : NSObject {

	FBUserSession* _session;
	id<FBMediaVideoManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBMediaVideoManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)applyTrimRange:(SCD_Struct_FB22)arg1 toVideoAsset:(id)arg2 ;
-(void)setAudioEnabled:(BOOL)arg1 forVideoAsset:(id)arg2 ;
-(void)preparePreviewImageForVideoAsset:(id)arg1 withEdits:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)didFinishEditingAsset:(id)arg1 ;
-(void)applyCropRect:(CGRect)arg1 toVideoAsset:(id)arg2 ;
-(void)applyFilterConfig:(id)arg1 toVideoAsset:(id)arg2 ;
-(void)setUseNewTranscoderEnabled:(BOOL)arg1 forVideoAsset:(id)arg2 ;
-(void)setDelegate:(id<FBMediaVideoManagerDelegate>)arg1 ;
-(id<FBMediaVideoManagerDelegate>)delegate;
-(id)initWithSession:(id)arg1 ;
@end

