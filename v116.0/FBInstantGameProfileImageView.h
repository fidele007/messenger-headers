/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:02 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBUserSession, FBInstantGameProfileImageViewConfiguration, UIImageView, NSURL;

@interface FBInstantGameProfileImageView : UIView {

	FBUserSession* _session;
	FBInstantGameProfileImageViewConfiguration* _config;
	id _imageDownload;
	UIImageView* _playerProfileImageView;
	NSURL* _imageURL;

}

@property (nonatomic,copy) NSURL * imageURL;              //@synthesize imageURL=_imageURL - In the implementation block
-(id)initWithSession:(id)arg1 config:(id)arg2 ;
-(void)_setRoundedImage:(id)arg1 ;
-(void)_resetToDefaultImage;
-(void)_startDownload;
-(void)_handleImageDownloaderResponse:(id)arg1 forImageURL:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
@end

