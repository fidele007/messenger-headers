/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:01 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBMediaItemUploadFlowProgressCalculator : NSObject {

	double _fetchServerSettingsFlowRatio;
	double _transcodeFlowRatio;
	double _uploadFlowRatio;
	double _fetchServerSettingsFlowProgress;
	double _transcodeFlowProgress;
	double _uploadFlowProgress;

}

@property (assign,nonatomic) double fetchServerSettingsFlowProgress;              //@synthesize fetchServerSettingsFlowProgress=_fetchServerSettingsFlowProgress - In the implementation block
@property (assign,nonatomic) double transcodeFlowProgress;                        //@synthesize transcodeFlowProgress=_transcodeFlowProgress - In the implementation block
@property (assign,nonatomic) double uploadFlowProgress;                           //@synthesize uploadFlowProgress=_uploadFlowProgress - In the implementation block
-(id)initWithDefaultProgressRatios;
-(void)updateTranscodeFlowProgressRatioForRawUploadsCase;
-(double)fetchServerSettingsFlowProgress;
-(void)setFetchServerSettingsFlowProgress:(double)arg1 ;
-(double)transcodeFlowProgress;
-(void)setTranscodeFlowProgress:(double)arg1 ;
-(double)uploadFlowProgress;
-(void)setUploadFlowProgress:(double)arg1 ;
-(double)progress;
@end
