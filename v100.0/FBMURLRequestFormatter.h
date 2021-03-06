/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBUserAgentFormatting;
@class FBLocaleMap, FBAPISessionStore;

@interface FBMURLRequestFormatter : NSObject {

	id<FBUserAgentFormatting> _userAgentFormatter;
	FBLocaleMap* _localeMap;
	FBAPISessionStore* _apiSessionStore;

}
-(id)initWithUserAgentFormatter:(id)arg1 localeMap:(id)arg2 apiSessionStore:(id)arg3 ;
-(id)formattedURLRequestWithParams:(id)arg1 urlProtocolUploadDelegate:(id)arg2 ;
-(void)dealloc;
@end

