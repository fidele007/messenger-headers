/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:04 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>

@class NSURL;

@interface MNOpenInBrowserActivity : UIActivity {

	NSURL* _url;

}

@property (nonatomic,copy) NSURL * url;              //@synthesize url=_url - In the implementation block
+(long long)activityCategory;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(id)activityType;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)activityImage;
@end

