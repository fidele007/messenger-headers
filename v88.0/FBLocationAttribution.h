/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBLocationAttribution : NSObject {

	int _totalTime;
	int _subscriberCount;
	double _registrationTime;

}

@property (assign,nonatomic) int totalTime;                        //@synthesize totalTime=_totalTime - In the implementation block
@property (assign,nonatomic) double registrationTime;              //@synthesize registrationTime=_registrationTime - In the implementation block
@property (assign,nonatomic) int subscriberCount;                  //@synthesize subscriberCount=_subscriberCount - In the implementation block
-(double)registrationTime;
-(void)setRegistrationTime:(double)arg1 ;
-(int)totalTime;
-(void)setTotalTime:(int)arg1 ;
-(int)subscriberCount;
-(void)setSubscriberCount:(int)arg1 ;
@end

