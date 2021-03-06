/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBInjecting.h>

@protocol MNAvatarImageDecorating;
@class FBProviderMapData, MNProfileImageViewController, MNThreadImageManager, NSString;

@interface MNMessageSearchResultCellFactoryInjector : NSObject <FBInjecting> {

	FBProviderMapData* _mapData;
	id<MNAvatarImageDecorating> _avatarImageDecoration;
	MNProfileImageViewController* _profileImageViewController;
	MNThreadImageManager* _threadImageManager;

}

@property (nonatomic,readonly) id<MNAvatarImageDecorating> avatarImageDecoration;                      //@synthesize avatarImageDecoration=_avatarImageDecoration - In the implementation block
@property (nonatomic,readonly) MNProfileImageViewController * profileImageViewController;              //@synthesize profileImageViewController=_profileImageViewController - In the implementation block
@property (nonatomic,readonly) MNThreadImageManager * threadImageManager;                              //@synthesize threadImageManager=_threadImageManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(id<MNAvatarImageDecorating>)avatarImageDecoration;
-(MNProfileImageViewController *)profileImageViewController;
-(MNThreadImageManager *)threadImageManager;
@end

