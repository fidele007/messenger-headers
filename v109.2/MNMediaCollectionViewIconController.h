/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:36 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNMediaCollectionIconViewDelegate.h>
#import <FBSharedFramework/FBClassProvidable.h>
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
-(void)_didDownloadImage:(CGImageRef)arg1 ;
-(void)didLoadAttributionAppSupplementaryInfoWithThreadKey:(id)arg1 ;
-(void)awakeWithView:(id)arg1 content:(id)arg2 ;
-(id)initWithImageDownloader:(id)arg1 attributionSupplementaryInfoLoader:(id)arg2 ;
-(void)mediaCollectionIconViewDidTapIcon:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)setDelegate:(id<MNMediaCollectionViewIconControllerDelegate>)arg1 ;
-(id<MNMediaCollectionViewIconControllerDelegate>)delegate;
-(void)viewDidDisappear;
@end

