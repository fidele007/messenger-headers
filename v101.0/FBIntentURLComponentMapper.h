/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBIntentURLComponentMatching;
@interface FBIntentURLComponentMapper : NSObject {

	id<FBIntentURLComponentMatching> _matcher;
	/*^block*/id _setter;
	/*^block*/id _getter;

}

@property (nonatomic,copy,readonly) id setter;              //@synthesize setter=_setter - In the implementation block
@property (nonatomic,copy,readonly) id getter;              //@synthesize getter=_getter - In the implementation block
+(id)newWithMatcher:(id)arg1 ;
+(id)newWithMatcher:(id)arg1 set:(/*^block*/id)arg2 get:(/*^block*/id)arg3 ;
-(BOOL)matchesPathComponent:(id)arg1 ;
-(id)getter;
-(id)setter;
@end
