/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIImageView, FBUserSession, FBInstantGameUIMetrics, NSURL;

@interface FBQuicksilverProfileImageViewCellCollectionViewCell : UIView {

	UIImageView* _playerProfileImageView;
	FBUserSession* _session;
	FBInstantGameUIMetrics* _metrics;
	NSURL* _imageURL;

}

@property (nonatomic,copy) NSURL * imageURL;              //@synthesize imageURL=_imageURL - In the implementation block
-(void)layoutSubviews;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
-(id)initWithSession:(id)arg1 ;
-(void)setProfileImage:(id)arg1 ;
@end

