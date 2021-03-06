/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBReactionSessionInfo : NSObject {

	NSString* _reactionSessionId;
	NSString* _referrer;
	NSString* _surface;

}

@property (nonatomic,copy,readonly) NSString * reactionSessionId;              //@synthesize reactionSessionId=_reactionSessionId - In the implementation block
@property (nonatomic,copy,readonly) NSString * referrer;                       //@synthesize referrer=_referrer - In the implementation block
@property (nonatomic,copy,readonly) NSString * surface;                        //@synthesize surface=_surface - In the implementation block
-(NSString *)reactionSessionId;
-(id)initWithReactionSessionId:(id)arg1 referrer:(id)arg2 surface:(id)arg3 ;
-(NSString *)referrer;
-(NSString *)surface;
@end

