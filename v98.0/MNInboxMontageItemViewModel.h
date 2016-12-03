/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNInboxMontageItemContent, NSString, UIColor, MNInboxImpressionLoggingData, MNMontageLoadingState;

@interface MNInboxMontageItemViewModel : FBValueObject <NSCopying> {

	BOOL _isViewerMontage;
	MNInboxMontageItemContent* _content;
	NSString* _name;
	NSString* _shortName;
	NSString* _timestamp;
	UIColor* _maskColor;
	MNInboxImpressionLoggingData* _loggingData;
	MNMontageLoadingState* _loadingState;
	long long _style;

}

@property (nonatomic,copy,readonly) MNInboxMontageItemContent * content;                     //@synthesize content=_content - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortName;                                    //@synthesize shortName=_shortName - In the implementation block
@property (nonatomic,copy,readonly) NSString * timestamp;                                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy,readonly) UIColor * maskColor;                                     //@synthesize maskColor=_maskColor - In the implementation block
@property (nonatomic,copy,readonly) MNInboxImpressionLoggingData * loggingData;              //@synthesize loggingData=_loggingData - In the implementation block
@property (nonatomic,readonly) BOOL isViewerMontage;                                         //@synthesize isViewerMontage=_isViewerMontage - In the implementation block
@property (nonatomic,copy,readonly) MNMontageLoadingState * loadingState;                    //@synthesize loadingState=_loadingState - In the implementation block
@property (nonatomic,readonly) long long style;                                              //@synthesize style=_style - In the implementation block
-(MNInboxImpressionLoggingData *)loggingData;
-(BOOL)isViewerMontage;
-(id)initWithContent:(id)arg1 name:(id)arg2 shortName:(id)arg3 timestamp:(id)arg4 maskColor:(id)arg5 loggingData:(id)arg6 isViewerMontage:(BOOL)arg7 loadingState:(id)arg8 style:(long long)arg9 ;
-(NSString *)timestamp;
-(NSString *)name;
-(long long)style;
-(MNInboxMontageItemContent *)content;
-(MNMontageLoadingState *)loadingState;
-(UIColor *)maskColor;
-(NSString *)shortName;
@end

