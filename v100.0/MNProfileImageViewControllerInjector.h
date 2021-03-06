/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBInjecting.h>

@class FBProviderMapData, FBImageDownloader, MNBatchProfileImageFetcher, MNCDNProfileImageDownloader, NSString;

@interface MNProfileImageViewControllerInjector : NSObject <FBInjecting> {

	FBProviderMapData* _mapData;
	FBImageDownloader* _imageDownloader;
	MNBatchProfileImageFetcher* _batchProfileImageFetcher;
	MNCDNProfileImageDownloader* _cdnProfileImageDownloader;

}

@property (nonatomic,readonly) FBImageDownloader * imageDownloader;                                  //@synthesize imageDownloader=_imageDownloader - In the implementation block
@property (nonatomic,readonly) MNBatchProfileImageFetcher * batchProfileImageFetcher;                //@synthesize batchProfileImageFetcher=_batchProfileImageFetcher - In the implementation block
@property (nonatomic,readonly) MNCDNProfileImageDownloader * cdnProfileImageDownloader;              //@synthesize cdnProfileImageDownloader=_cdnProfileImageDownloader - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(FBImageDownloader *)imageDownloader;
-(MNBatchProfileImageFetcher *)batchProfileImageFetcher;
-(MNCDNProfileImageDownloader *)cdnProfileImageDownloader;
@end

