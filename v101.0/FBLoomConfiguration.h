/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
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
