/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSNumber, NSString;

@interface FBLocationManagerBluetoothScan : FBGraphQLInput {

	NSNumber* _ageMs;
	NSNumber* _rssiDbm;
	NSString* _advertisementPayloadBase64;
	NSString* _hardwareAddress;

}

@property (nonatomic,copy) NSNumber * ageMs;                                   //@synthesize ageMs=_ageMs - In the implementation block
@property (nonatomic,copy) NSNumber * rssiDbm;                                 //@synthesize rssiDbm=_rssiDbm - In the implementation block
@property (nonatomic,copy) NSString * advertisementPayloadBase64;              //@synthesize advertisementPayloadBase64=_advertisementPayloadBase64 - In the implementation block
@property (nonatomic,copy) NSString * hardwareAddress;                         //@synthesize hardwareAddress=_hardwareAddress - In the implementation block
-(NSString *)hardwareAddress;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)advertisementPayloadBase64;
-(void)setAdvertisementPayloadBase64:(NSString *)arg1 ;
-(NSNumber *)ageMs;
-(void)setAgeMs:(NSNumber *)arg1 ;
-(void)setHardwareAddress:(NSString *)arg1 ;
-(NSNumber *)rssiDbm;
-(void)setRssiDbm:(NSNumber *)arg1 ;
@end

