/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBInterpolatedValue : NSObject {

	double* _startValues;
	double* _endValues;
	double* _currentValues;
	double _progress;
	unsigned long long _size;

}

@property (assign,nonatomic) double* startValues;                    //@synthesize startValues=_startValues - In the implementation block
@property (assign,nonatomic) double* endValues;                      //@synthesize endValues=_endValues - In the implementation block
@property (nonatomic,readonly) double* currentValues;                //@synthesize currentValues=_currentValues - In the implementation block
@property (assign,nonatomic) double progress;                        //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) unsigned long long size;              //@synthesize size=_size - In the implementation block
+(id)interpolatedValueOfSize:(unsigned long long)arg1 ;
-(void)setStartValues:(double*)arg1 ;
-(void)setEndValues:(double*)arg1 ;
-(double*)currentValues;
-(void)_updateCurrentValues;
-(double*)startValues;
-(double*)endValues;
-(unsigned long long)size;
-(void)dealloc;
-(id)initWithSize:(unsigned long long)arg1 ;
-(void)setProgress:(double)arg1 ;
-(double)progress;
@end

