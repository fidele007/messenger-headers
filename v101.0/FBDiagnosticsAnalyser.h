/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBPowerLogsSQLClient;

@interface FBDiagnosticsAnalyser : NSObject {

	FBPowerLogsSQLClient* _client;

}
-(id)initWithLogfile:(id)arg1 ;
-(void)process:(id)arg1 from:(id)arg2 toDate:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)process:(id)arg1 from:(id)arg2 toDate:(id)arg3 bundleId:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)processTable:(id)arg1 foreignTable:(id)arg2 from:(id)arg3 toDate:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)processForAttributionEnergyFrom:(id)arg1 to:(id)arg2 allApps:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
@end

