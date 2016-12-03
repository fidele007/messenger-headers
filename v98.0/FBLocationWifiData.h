/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSNumber;

@interface FBLocationWifiData : FBGraphQLInput {

	NSString* _bssid;
	NSString* _name;
	NSNumber* _rssi;
	NSNumber* _frequency;
	NSNumber* _staleTime;

}

@property (nonatomic,copy) NSString * bssid;                  //@synthesize bssid=_bssid - In the implementation block
@property (nonatomic,copy) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSNumber * rssi;                   //@synthesize rssi=_rssi - In the implementation block
@property (nonatomic,copy) NSNumber * frequency;              //@synthesize frequency=_frequency - In the implementation block
@property (nonatomic,copy) NSNumber * staleTime;              //@synthesize staleTime=_staleTime - In the implementation block
-(void)setStaleTime:(NSNumber *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)bssid;
-(void)setBssid:(NSString *)arg1 ;
-(NSNumber *)staleTime;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSNumber *)frequency;
-(void)setFrequency:(NSNumber *)arg1 ;
-(void)setRssi:(NSNumber *)arg1 ;
-(NSNumber *)rssi;
@end

