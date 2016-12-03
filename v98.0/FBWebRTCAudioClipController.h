/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol FBWebRTCAudioClipControllerDelegate;
@class FBWebRTCEngine, UICollectionView, FBSimpleDownloader, FBUserSession, NSArray, NSString;

@interface FBWebRTCAudioClipController : NSObject <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	FBWebRTCEngine* _engine;
	UICollectionView* _collectionView;
	FBSimpleDownloader* _audioDownloader;
	FBUserSession* _session;
	NSArray* _audioClipList;
	id<FBWebRTCAudioClipControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBWebRTCAudioClipControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultAudioClips;
-(void)configureWithEngine:(id)arg1 ;
-(id)_audioClipForIndexPath:(id)arg1 ;
-(id)_buildURLWithKey:(id)arg1 ;
-(void)_playAudioClip:(id)arg1 ;
-(void)setDelegate:(id<FBWebRTCAudioClipControllerDelegate>)arg1 ;
-(id<FBWebRTCAudioClipControllerDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)initWithSession:(id)arg1 ;
-(void)configureCollectionView:(id)arg1 ;
@end

