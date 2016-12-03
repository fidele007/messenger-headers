/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPlatformPhotoAttachment.h>

@class FBUserSession, UIImage;

@interface FBPlatformRemotePhotoAttachment : FBPlatformPhotoAttachment {

	FBUserSession* _session;
	BOOL _requestingImageThumb;
	UIImage* _displayImage;

}
-(BOOL)requiresUpload;
-(id)existingFBID;
-(id)nameOfServerAssetIDFieldOverridingFileURL;
-(void)setDisplayImage:(id)arg1 ;
-(id)initWithURL:(id)arg1 platformPhotoMetadata:(id)arg2 session:(id)arg3 ;
-(void)_loadThumbnail;
-(void)_loadImageWithURI:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(id)displayImage;
@end

