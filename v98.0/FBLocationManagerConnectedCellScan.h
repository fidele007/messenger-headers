/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, FBLocationManagerCDMAInfo, FBLocationManagerGSMInfo, FBLocationManagerLTEInfo, FBLocationManagerWCDMAInfo;

@interface FBLocationManagerConnectedCellScan : FBGraphQLInput {

	NSString* _networkType;
	NSString* _networkCountryIso;
	NSString* _networkOperatorMccMnc;
	NSString* _networkOperatorName;
	NSString* _isNetworkRoaming;
	FBLocationManagerCDMAInfo* _cdmaInfo;
	FBLocationManagerGSMInfo* _gsmInfo;
	FBLocationManagerLTEInfo* _lteInfo;
	FBLocationManagerWCDMAInfo* _wcdmaInfo;

}

@property (nonatomic,copy) NSString * networkType;                              //@synthesize networkType=_networkType - In the implementation block
@property (nonatomic,copy) NSString * networkCountryIso;                        //@synthesize networkCountryIso=_networkCountryIso - In the implementation block
@property (nonatomic,copy) NSString * networkOperatorMccMnc;                    //@synthesize networkOperatorMccMnc=_networkOperatorMccMnc - In the implementation block
@property (nonatomic,copy) NSString * networkOperatorName;                      //@synthesize networkOperatorName=_networkOperatorName - In the implementation block
@property (nonatomic,copy) NSString * isNetworkRoaming;                         //@synthesize isNetworkRoaming=_isNetworkRoaming - In the implementation block
@property (nonatomic,copy) FBLocationManagerCDMAInfo * cdmaInfo;                //@synthesize cdmaInfo=_cdmaInfo - In the implementation block
@property (nonatomic,copy) FBLocationManagerGSMInfo * gsmInfo;                  //@synthesize gsmInfo=_gsmInfo - In the implementation block
@property (nonatomic,copy) FBLocationManagerLTEInfo * lteInfo;                  //@synthesize lteInfo=_lteInfo - In the implementation block
@property (nonatomic,copy) FBLocationManagerWCDMAInfo * wcdmaInfo;              //@synthesize wcdmaInfo=_wcdmaInfo - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(FBLocationManagerCDMAInfo *)cdmaInfo;
-(void)setCdmaInfo:(FBLocationManagerCDMAInfo *)arg1 ;
-(FBLocationManagerGSMInfo *)gsmInfo;
-(void)setGsmInfo:(FBLocationManagerGSMInfo *)arg1 ;
-(FBLocationManagerLTEInfo *)lteInfo;
-(void)setLteInfo:(FBLocationManagerLTEInfo *)arg1 ;
-(FBLocationManagerWCDMAInfo *)wcdmaInfo;
-(void)setWcdmaInfo:(FBLocationManagerWCDMAInfo *)arg1 ;
-(NSString *)networkCountryIso;
-(void)setNetworkCountryIso:(NSString *)arg1 ;
-(NSString *)networkOperatorMccMnc;
-(void)setNetworkOperatorMccMnc:(NSString *)arg1 ;
-(NSString *)networkOperatorName;
-(void)setNetworkOperatorName:(NSString *)arg1 ;
-(NSString *)isNetworkRoaming;
-(void)setIsNetworkRoaming:(NSString *)arg1 ;
-(void)setNetworkType:(NSString *)arg1 ;
-(NSString *)networkType;
@end
