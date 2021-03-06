/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface FBWebImageSentinelLogger : NSObject {

	unsigned long long _order;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _imageID;

}
-(void)_logEvent:(id)arg1 extra:(id)arg2 ;
-(id)initWithImageView:(id)arg1 ;
-(void)logCancel;
-(void)logSetSpecifier:(id)arg1 ;
-(void)logDownloadError:(id)arg1 ;
-(void)logSetImage:(id)arg1 ;
-(id)_dictionaryFromSpecifier:(id)arg1 ;
-(id)_dictionaryFromDownloadResponse:(id)arg1 ;
-(id)_commonExtra;
@end

