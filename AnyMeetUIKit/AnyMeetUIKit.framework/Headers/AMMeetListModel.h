//
//  AMMeetListModel.h
//  AnyMeetUIKit
//
//  Created by derek on 2018/5/9.
//  Copyright © 2018年 derek. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Meetinglist :NSObject
@property (nonatomic , copy) NSString              * meetingid;
@property (nonatomic , copy) NSString              * m_start_time;
@property (nonatomic , copy) NSString              * m_max_number;
@property (nonatomic , assign) BOOL                m_is_lock;
@property (nonatomic , assign) int                 m_quality;
@property (nonatomic , copy) NSString              * m_userid;
@property (nonatomic , copy) NSString              * m_password;
@property (nonatomic , copy) NSString              * m_avcodec;
@property (nonatomic , copy) NSString              * m_create_at;
@property (nonatomic , copy) NSString              * m_name;
@property (nonatomic , assign) int                 m_limit_type;
@property (nonatomic , copy) NSString              * m_anyrtcid;
@property (nonatomic , assign) int                 m_line_quality;
@property (nonatomic , assign) int                 m_type;

@end

@interface AMMeetListModel :NSObject
@property (nonatomic , copy) NSString              * currenttime;
@property (nonatomic , assign) int                 code;
@property (nonatomic , copy) NSString              * message;
@property (nonatomic , copy) NSString              * requestid;
@property (nonatomic , assign) int                 total_number;
@property (nonatomic , strong) NSArray<Meetinglist *>              * meetinglist;

@end
