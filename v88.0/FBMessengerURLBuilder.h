/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBMessengerURLBuilder : NSObject {

	NSString* _messengerURLScheme;
	NSString* _messengerPublicURLScheme;
	NSString* _messengerGroupThreadURLScheme;
	NSString* _messengerPagesShortlinkScheme;
	NSString* _messengerAPIURLScheme;
	NSString* _messengerShareURLScheme;
	NSString* _messengerShareEventURLScheme;
	NSString* _mobileSiteHost;

}

@property (nonatomic,copy,readonly) NSString * messengerURLScheme;                         //@synthesize messengerURLScheme=_messengerURLScheme - In the implementation block
@property (nonatomic,copy,readonly) NSString * messengerPublicURLScheme;                   //@synthesize messengerPublicURLScheme=_messengerPublicURLScheme - In the implementation block
@property (nonatomic,copy,readonly) NSString * messengerGroupThreadURLScheme;              //@synthesize messengerGroupThreadURLScheme=_messengerGroupThreadURLScheme - In the implementation block
@property (nonatomic,copy,readonly) NSString * messengerPagesShortlinkScheme;              //@synthesize messengerPagesShortlinkScheme=_messengerPagesShortlinkScheme - In the implementation block
@property (nonatomic,copy,readonly) NSString * messengerAPIURLScheme;                      //@synthesize messengerAPIURLScheme=_messengerAPIURLScheme - In the implementation block
@property (nonatomic,copy,readonly) NSString * messengerShareURLScheme;                    //@synthesize messengerShareURLScheme=_messengerShareURLScheme - In the implementation block
@property (nonatomic,copy,readonly) NSString * messengerShareEventURLScheme;               //@synthesize messengerShareEventURLScheme=_messengerShareEventURLScheme - In the implementation block
@property (nonatomic,copy,readonly) NSString * mobileSiteHost;                             //@synthesize mobileSiteHost=_mobileSiteHost - In the implementation block
-(NSString *)messengerShareEventURLScheme;
-(NSString *)messengerShareURLScheme;
-(NSString *)messengerURLScheme;
-(NSString *)messengerPagesShortlinkScheme;
-(NSString *)messengerPublicURLScheme;
-(NSString *)messengerGroupThreadURLScheme;
-(NSString *)messengerAPIURLScheme;
-(id)initWithMessengerURLScheme:(id)arg1 messengerPublicURLScheme:(id)arg2 messengerGroupThreadURLScheme:(id)arg3 messengerPagesShortlinkScheme:(id)arg4 messengerAPIURLScheme:(id)arg5 messengerShareURLScheme:(id)arg6 messengerShareEventURLScheme:(id)arg7 mobileSiteHost:(id)arg8 ;
-(id)mobileSiteURLWithPath:(id)arg1 ;
-(id)messengerURLWithPath:(id)arg1 ;
-(id)messengerGroupURLWithPath:(id)arg1 ;
-(NSString *)mobileSiteHost;
@end

