/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:07 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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
-(void)setFetchServerSettingsFlowProgress:(double)arg1 ;
-(void)setUploadFlowProgress:(double)arg1 ;
-(void)setTranscodeFlowProgress:(double)arg1 ;
-(double)fetchServerSettingsFlowProgress;
-(double)transcodeFlowProgress;
-(double)uploadFlowProgress;
-(double)progress;
@end

