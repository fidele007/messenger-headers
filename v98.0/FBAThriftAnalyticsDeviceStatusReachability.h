/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/TBaseStruct.h>
#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBAThriftAnalyticsDeviceStatusReachability : TBaseStruct <TBase, NSCoding> {

	int __thrift_radioTechnology;
	int __thrift_connectionType;
	BOOL __thrift_radioTechnology_set;
	BOOL __thrift_connectionType_set;

}

@property (assign,nonatomic) int radioTechnology; 
@property (assign,nonatomic) int connectionType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(id)toDict;
-(id)initWithRadioTechnology:(int)arg1 connectionType:(int)arg2 ;
-(BOOL)radioTechnologyIsSet;
-(void)unsetRadioTechnology;
-(BOOL)connectionTypeIsSet;
-(void)unsetConnectionType;
-(BOOL)makeImmutable;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)validate;
-(void)setConnectionType:(int)arg1 ;
-(int)connectionType;
-(void)write:(id)arg1 ;
-(int)radioTechnology;
-(void)setRadioTechnology:(int)arg1 ;
@end
