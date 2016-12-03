/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:16 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBProgressViewUpdatePolicy.h>

@class NSString;

@interface FBDeceleratingProgressViewUpdatePolicy : NSObject <FBProgressViewUpdatePolicy> {

	BOOL _finishing;
	double _maxFakeProgress;
	float _finalProgress;
	/*^block*/id _completionBlock;

}

@property (nonatomic,copy) id completionBlock;                      //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic) float finalProgress;                   //@synthesize finalProgress=_finalProgress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFinalProgress:(float)arg1 ;
-(id)initWithFinalProgress:(float)arg1 ;
-(void)finishWithCompletionBlock:(/*^block*/id)arg1 ;
-(float)incrementForCurrentProgress:(double)arg1 ;
-(float)finalProgress;
-(id)init;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(BOOL)animated;
-(double)updateInterval;
@end
