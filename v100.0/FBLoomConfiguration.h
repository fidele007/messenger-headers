/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSDictionary;

@interface FBLoomConfiguration : NSObject <NSCoding> {

	NSDictionary* _internalConfiguration;
	mutex _m;

}
-(id)initWithConfiguration:(id)arg1 JSONKey:(id)arg2 ;
-(id)arrayConfigurationForKey:(id)arg1 ;
-(id)dictionaryConfigurationForKey:(id)arg1 ;
-(void)setInternalConfiguration:(id)arg1 ;
-(id)internalConfiguration;
-(id)initWithResponse:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

