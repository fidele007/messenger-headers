/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface FBManualConfigBuilder : NSObject {

	NSNumber* _maxSize;
	NSNumber* _lowSpaceMaxSize;

}

@property (nonatomic,copy) NSNumber * maxSize;                      //@synthesize maxSize=_maxSize - In the implementation block
@property (nonatomic,copy) NSNumber * lowSpaceMaxSize;              //@synthesize lowSpaceMaxSize=_lowSpaceMaxSize - In the implementation block
-(void)setLowSpaceMaxSize:(NSNumber *)arg1 ;
-(NSNumber *)lowSpaceMaxSize;
-(id)init;
-(NSNumber *)maxSize;
-(void)setMaxSize:(NSNumber *)arg1 ;
-(id)build;
@end

