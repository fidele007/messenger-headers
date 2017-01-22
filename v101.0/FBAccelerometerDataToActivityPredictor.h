/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class FBAccelerometerDataToActivityPredictorConfig;

@interface FBAccelerometerDataToActivityPredictor : NSObject {

	FBAccelerometerDataToActivityPredictorConfig* _config;

}
-(id)transferAccelerometerDataToActivity:(id)arg1 ;
-(double)_computeStandardDeviation:(id)arg1 startIndex:(unsigned long long)arg2 length:(unsigned long long)arg3 ;
-(unsigned long long)_STDToActivity:(double)arg1 ;
-(id)_activityFromSegments:(const vector<unsigned int, std::__1::allocator<unsigned int> >*)arg1 activitySession:(id)arg2 ;
-(double)generateAbsoluteAcceleration:(id)arg1 ;
-(id)initWithConfig:(id)arg1 ;
@end
