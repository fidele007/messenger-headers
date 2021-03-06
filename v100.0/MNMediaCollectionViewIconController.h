/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNMediaCollectionIconViewDelegate.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNAttributionAppSupplementaryInfoLoaderListener.h>

@protocol MNMediaCollectionViewIconControllerDelegate;
@class FBImageDownloader, MNAttributionAppSupplementaryInfoLoader, NSString, FBMemPlatformApplication, MNMediaCollectionIconView;

@interface MNMediaCollectionViewIconController : NSObject <MNMediaCollectionIconViewDelegate, FBClassProvidable, MNAttributionAppSupplementaryInfoLoaderListener> {

	FBImageDownloader* _imageDownloader;
	MNAttributionAppSupplementaryInfoLoader* _attributionLoader;
	NSString* _attributionID;
	FBMemPlatformApplication* _platformApplication;
	MNMediaCollectionIconView* _iconView;
	id<MNMediaCollectionViewIconControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNMediaCollectionViewIconControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_didDownloadImage:(CGImageRef)arg1 ;
-(void)didLoadAttributionAppSupplementaryInfoWithThreadKey:(id)arg1 ;
-(void)awakeWithView:(id)arg1 content:(id)arg2 ;
-(id)initWithImageDownloader:(id)arg1 attributionSupplementaryInfoLoader:(id)arg2 ;
-(void)mediaCollectionIconViewDidTapIcon:(id)arg1 ;
-(void)setDelegate:(id<MNMediaCollectionViewIconControllerDelegate>)arg1 ;
-(id<MNMediaCollectionViewIconControllerDelegate>)delegate;
-(void)viewDidDisappear;
@end

