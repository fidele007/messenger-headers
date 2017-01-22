/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:21 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBInjecting.h>

@protocol FBWebImageDownloaderFactoryProtocol, MNBadgedProfileImagePlaceholderFactory, MNProfileImageBadgeFactory;
@class FBProviderMapData, FBWebRTCCallButtonImageProvider, NSString;

@interface MNContactCardCellInjector : NSObject <FBInjecting> {

	FBProviderMapData* _mapData;
	id<FBWebImageDownloaderFactoryProtocol> _downloaderFactory;
	id<MNBadgedProfileImagePlaceholderFactory> _profileImagePlaceholderFactory;
	id<MNProfileImageBadgeFactory> _profileImageBadgeFactory;
	FBWebRTCCallButtonImageProvider* _callButtonImageProvider;

}

@property (nonatomic,readonly) id<FBWebImageDownloaderFactoryProtocol> downloaderFactory;                              //@synthesize downloaderFactory=_downloaderFactory - In the implementation block
@property (nonatomic,readonly) id<MNBadgedProfileImagePlaceholderFactory> profileImagePlaceholderFactory;              //@synthesize profileImagePlaceholderFactory=_profileImagePlaceholderFactory - In the implementation block
@property (nonatomic,readonly) id<MNProfileImageBadgeFactory> profileImageBadgeFactory;                                //@synthesize profileImageBadgeFactory=_profileImageBadgeFactory - In the implementation block
@property (nonatomic,readonly) FBWebRTCCallButtonImageProvider * callButtonImageProvider;                              //@synthesize callButtonImageProvider=_callButtonImageProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(FBWebRTCCallButtonImageProvider *)callButtonImageProvider;
-(id<FBWebImageDownloaderFactoryProtocol>)downloaderFactory;
-(id<MNProfileImageBadgeFactory>)profileImageBadgeFactory;
-(id<MNBadgedProfileImagePlaceholderFactory>)profileImagePlaceholderFactory;
@end
