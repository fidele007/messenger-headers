/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBVideoAssetExporter.h>

@protocol FBVideoAssetExporter, FBErrorSimulationProtocol;
@class NSURL, NSString;

@interface FBVideoAssetExporterWrapper : NSObject <FBVideoAssetExporter> {

	id<FBVideoAssetExporter> _videoAssetExporter;
	NSURL* _outputURL;
	NSURL* _assetURL;
	id<FBErrorSimulationProtocol> _errorSimulation;
	SCD_Struct_FB351 _config;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long estimatedOutputFileLength; 
@property (nonatomic,readonly) SCD_Struct_FB33 outputDuration; 
-(id)initWithAssetURL:(id)arg1 outputURL:(id)arg2 config:(SCD_Struct_FB352)arg3 errorSimulation:(id)arg4 ;
-(void)exportAsynchronouslyWithProgress:(/*^block*/id)arg1 segmentCompletion:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)exportAsynchronouslyWithProgress:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelExportWithCompletionBlock:(/*^block*/id)arg1 ;
-(SCD_Struct_FB33)outputDuration;
-(id)_newVideoAssetExporter;
-(void)cleanUp;
-(long long)estimatedOutputFileLength;
@end

