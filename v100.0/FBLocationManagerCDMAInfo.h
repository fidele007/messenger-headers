/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSNumber, FBGeoPoint;

@interface FBLocationManagerCDMAInfo : FBGraphQLInput {

	NSNumber* _baseStationId;
	FBGeoPoint* _baseStationCoordinates;
	NSNumber* _networkId;
	NSNumber* _systemId;
	NSNumber* _cdmaRssiDbm;
	NSNumber* _cdmaEcioDb10;
	NSNumber* _evdoRssiDbm;
	NSNumber* _evdoEcioDb10;
	NSNumber* _evdoSignalToNoise;

}

@property (nonatomic,copy) NSNumber * baseStationId;                         //@synthesize baseStationId=_baseStationId - In the implementation block
@property (nonatomic,copy) FBGeoPoint * baseStationCoordinates;              //@synthesize baseStationCoordinates=_baseStationCoordinates - In the implementation block
@property (nonatomic,copy) NSNumber * networkId;                             //@synthesize networkId=_networkId - In the implementation block
@property (nonatomic,copy) NSNumber * systemId;                              //@synthesize systemId=_systemId - In the implementation block
@property (nonatomic,copy) NSNumber * cdmaRssiDbm;                           //@synthesize cdmaRssiDbm=_cdmaRssiDbm - In the implementation block
@property (nonatomic,copy) NSNumber * cdmaEcioDb10;                          //@synthesize cdmaEcioDb10=_cdmaEcioDb10 - In the implementation block
@property (nonatomic,copy) NSNumber * evdoRssiDbm;                           //@synthesize evdoRssiDbm=_evdoRssiDbm - In the implementation block
@property (nonatomic,copy) NSNumber * evdoEcioDb10;                          //@synthesize evdoEcioDb10=_evdoEcioDb10 - In the implementation block
@property (nonatomic,copy) NSNumber * evdoSignalToNoise;                     //@synthesize evdoSignalToNoise=_evdoSignalToNoise - In the implementation block
-(NSNumber *)networkId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSNumber *)baseStationId;
-(void)setBaseStationId:(NSNumber *)arg1 ;
-(FBGeoPoint *)baseStationCoordinates;
-(void)setBaseStationCoordinates:(FBGeoPoint *)arg1 ;
-(void)setNetworkId:(NSNumber *)arg1 ;
-(NSNumber *)cdmaRssiDbm;
-(void)setCdmaRssiDbm:(NSNumber *)arg1 ;
-(NSNumber *)cdmaEcioDb10;
-(void)setCdmaEcioDb10:(NSNumber *)arg1 ;
-(NSNumber *)evdoRssiDbm;
-(void)setEvdoRssiDbm:(NSNumber *)arg1 ;
-(NSNumber *)evdoEcioDb10;
-(void)setEvdoEcioDb10:(NSNumber *)arg1 ;
-(NSNumber *)evdoSignalToNoise;
-(void)setEvdoSignalToNoise:(NSNumber *)arg1 ;
-(NSNumber *)systemId;
-(void)setSystemId:(NSNumber *)arg1 ;
@end

