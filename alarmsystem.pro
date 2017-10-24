TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    alarm-composite/alarmcomponent.cpp \
    alarm-composite/alarmcomponentgroup.cpp \
    alarm-sensor/abstractsensor.cpp \
    alarm-sensor/smokesensor.cpp \
    alarm-sensor/motionsensor.cpp \
    alarm-sensor/toxicsensor.cpp \
    alarm-strategy/alarmstrategy.cpp \
    alarm-strategy/alarmstrategyowner.cpp \
    alarm-strategy/callpolice.cpp \
    alarm-strategy/callfiremen.cpp \
    alarm-composite/alarmcomponent.cpp \
    alarm-composite/alarmcomponentgroup.cpp \
    alarm-sensor/abstractsensor.cpp \
    alarm-sensor/motionsensor.cpp \
    alarm-sensor/smokesensor.cpp \
    alarm-sensor/toxicsensor.cpp \
    alarm-strategy/alarmstrategy.cpp \
    alarm-strategy/alarmstrategyowner.cpp \
    alarm-strategy/callfiremen.cpp \
    alarm-strategy/callpolice.cpp \
    main.cpp

HEADERS += \
    alarm-composite/alarmcomponent.h \
    alarm-composite/alarmcomponentgroup.h \
    alarm-sensor/abstractsensor.h \
    alarm-sensor/smokesensor.h \
    alarm-sensor/motionsensor.h \
    alarm-sensor/toxicsensor.h \
    alarm-strategy/alarmstrategy.h \
    alarm-strategy/alarmstrategyowner.h \
    alarm-strategy/callpolice.h \
    alarm-strategy/callfiremen.h \
    alarm-composite/alarmcomponent.h \
    alarm-composite/alarmcomponentgroup.h \
    alarm-sensor/abstractsensor.h \
    alarm-sensor/motionsensor.h \
    alarm-sensor/smokesensor.h \
    alarm-sensor/toxicsensor.h \
    alarm-strategy/alarmstrategy.h \
    alarm-strategy/alarmstrategyowner.h \
    alarm-strategy/callfiremen.h \
    alarm-strategy/callpolice.h



DISTFILES += \
    README.md \
    docs/html/search/all_0.js \
    docs/html/search/all_1.js \
    docs/html/search/all_2.js \
    docs/html/search/all_3.js \
    docs/html/search/all_4.js \
    docs/html/search/all_5.js \
    docs/html/search/all_6.js \
    docs/html/search/all_7.js \
    docs/html/search/all_8.js \
    docs/html/search/all_9.js \
    docs/html/search/all_a.js \
    docs/html/search/classes_0.js \
    docs/html/search/classes_1.js \
    docs/html/search/classes_2.js \
    docs/html/search/classes_3.js \
    docs/html/search/classes_4.js \
    docs/html/search/enums_0.js \
    docs/html/search/files_0.js \
    docs/html/search/files_1.js \
    docs/html/search/files_2.js \
    docs/html/search/files_3.js \
    docs/html/search/files_4.js \
    docs/html/search/functions_0.js \
    docs/html/search/functions_1.js \
    docs/html/search/functions_2.js \
    docs/html/search/functions_3.js \
    docs/html/search/functions_4.js \
    docs/html/search/functions_5.js \
    docs/html/search/functions_6.js \
    docs/html/search/functions_7.js \
    docs/html/search/functions_8.js \
    docs/html/search/groups_0.js \
    docs/html/search/pages_0.js \
    docs/html/search/search.js \
    docs/html/search/searchdata.js \
    docs/html/search/variables_0.js \
    docs/html/dynsections.js \
    docs/html/jquery.js \
    docs/latex/abstractsensor_8h__dep__incl.pdf \
    docs/latex/abstractsensor_8h__incl.pdf \
    docs/latex/alarmcomponent_8h__dep__incl.pdf \
    docs/latex/alarmcomponent_8h__incl.pdf \
    docs/latex/alarmcomponentgroup_8h__incl.pdf \
    docs/latex/alarmstrategy_8h__dep__incl.pdf \
    docs/latex/alarmstrategy_8h__incl.pdf \
    docs/latex/alarmstrategyowner_8h__dep__incl.pdf \
    docs/latex/alarmstrategyowner_8h__incl.pdf \
    docs/latex/callfiremen_8h__incl.pdf \
    docs/latex/callpolice_8h__incl.pdf \
    docs/latex/classAbstractSensor__coll__graph.pdf \
    docs/latex/classAbstractSensor__inherit__graph.pdf \
    docs/latex/classAlarmComponent__inherit__graph.pdf \
    docs/latex/classAlarmComponentGroup__coll__graph.pdf \
    docs/latex/classAlarmComponentGroup__inherit__graph.pdf \
    docs/latex/classAlarmStrategy__inherit__graph.pdf \
    docs/latex/classAlarmStrategyOwner__inherit__graph.pdf \
    docs/latex/classCallFiremen__coll__graph.pdf \
    docs/latex/classCallFiremen__inherit__graph.pdf \
    docs/latex/classCallPolice__coll__graph.pdf \
    docs/latex/classCallPolice__inherit__graph.pdf \
    docs/latex/classMotionSensor__coll__graph.pdf \
    docs/latex/classMotionSensor__inherit__graph.pdf \
    docs/latex/classSmokeSensor__coll__graph.pdf \
    docs/latex/classSmokeSensor__inherit__graph.pdf \
    docs/latex/classToxicSensor__coll__graph.pdf \
    docs/latex/classToxicSensor__inherit__graph.pdf \
    docs/latex/group__AlarmComposite.pdf \
    docs/latex/group__AlarmSensors.pdf \
    docs/latex/motionsensor_8h__incl.pdf \
    docs/latex/smokesensor_8h__incl.pdf \
    docs/latex/toxicsensor_8h__incl.pdf \
    docs/html/search/close.png \
    docs/html/search/mag_sel.png \
    docs/html/search/search_l.png \
    docs/html/search/search_m.png \
    docs/html/search/search_r.png \
    docs/html/abstractsensor_8h__dep__incl.png \
    docs/html/abstractsensor_8h__incl.png \
    docs/html/alarmcomponent_8h__dep__incl.png \
    docs/html/alarmcomponent_8h__incl.png \
    docs/html/alarmcomponentgroup_8h__incl.png \
    docs/html/alarmstrategy_8h__dep__incl.png \
    docs/html/alarmstrategy_8h__incl.png \
    docs/html/alarmstrategyowner_8h__dep__incl.png \
    docs/html/alarmstrategyowner_8h__incl.png \
    docs/html/arrowdown.png \
    docs/html/arrowright.png \
    docs/html/bc_s.png \
    docs/html/bdwn.png \
    docs/html/callfiremen_8h__incl.png \
    docs/html/callpolice_8h__incl.png \
    docs/html/classAbstractSensor__coll__graph.png \
    docs/html/classAbstractSensor__inherit__graph.png \
    docs/html/classAlarmComponent__inherit__graph.png \
    docs/html/classAlarmComponentGroup__coll__graph.png \
    docs/html/classAlarmComponentGroup__inherit__graph.png \
    docs/html/classAlarmStrategy__inherit__graph.png \
    docs/html/classAlarmStrategyOwner__inherit__graph.png \
    docs/html/classCallFiremen__coll__graph.png \
    docs/html/classCallFiremen__inherit__graph.png \
    docs/html/classCallPolice__coll__graph.png \
    docs/html/classCallPolice__inherit__graph.png \
    docs/html/classMotionSensor__coll__graph.png \
    docs/html/classMotionSensor__inherit__graph.png \
    docs/html/classSmokeSensor__coll__graph.png \
    docs/html/classSmokeSensor__inherit__graph.png \
    docs/html/classToxicSensor__coll__graph.png \
    docs/html/classToxicSensor__inherit__graph.png \
    docs/html/closed.png \
    docs/html/doc.png \
    docs/html/doxygen.png \
    docs/html/folderclosed.png \
    docs/html/folderopen.png \
    docs/html/graph_legend.png \
    docs/html/group__AlarmComposite.png \
    docs/html/group__AlarmSensors.png \
    docs/html/inherit_graph_0.png \
    docs/html/inherit_graph_1.png \
    docs/html/motionsensor_8h__incl.png \
    docs/html/nav_f.png \
    docs/html/nav_g.png \
    docs/html/nav_h.png \
    docs/html/open.png \
    docs/html/smokesensor_8h__incl.png \
    docs/html/splitbar.png \
    docs/html/sync_off.png \
    docs/html/sync_on.png \
    docs/html/tab_a.png \
    docs/html/tab_b.png \
    docs/html/tab_h.png \
    docs/html/tab_s.png \
    docs/html/toxicsensor_8h__incl.png \
    docs/html/search/search.css \
    docs/html/doxygen.css \
    docs/html/tabs.css \
    docs/html/search/all_0.html \
    docs/html/search/all_1.html \
    docs/html/search/all_2.html \
    docs/html/search/all_3.html \
    docs/html/search/all_4.html \
    docs/html/search/all_5.html \
    docs/html/search/all_6.html \
    docs/html/search/all_7.html \
    docs/html/search/all_8.html \
    docs/html/search/all_9.html \
    docs/html/search/all_a.html \
    docs/html/search/classes_0.html \
    docs/html/search/classes_1.html \
    docs/html/search/classes_2.html \
    docs/html/search/classes_3.html \
    docs/html/search/classes_4.html \
    docs/html/search/enums_0.html \
    docs/html/search/files_0.html \
    docs/html/search/files_1.html \
    docs/html/search/files_2.html \
    docs/html/search/files_3.html \
    docs/html/search/files_4.html \
    docs/html/search/functions_0.html \
    docs/html/search/functions_1.html \
    docs/html/search/functions_2.html \
    docs/html/search/functions_3.html \
    docs/html/search/functions_4.html \
    docs/html/search/functions_5.html \
    docs/html/search/functions_6.html \
    docs/html/search/functions_7.html \
    docs/html/search/functions_8.html \
    docs/html/search/groups_0.html \
    docs/html/search/nomatches.html \
    docs/html/search/pages_0.html \
    docs/html/search/variables_0.html \
    docs/html/abstractsensor_8h.html \
    docs/html/abstractsensor_8h_source.html \
    docs/html/alarmcomponent_8h.html \
    docs/html/alarmcomponent_8h_source.html \
    docs/html/alarmcomponentgroup_8h.html \
    docs/html/alarmcomponentgroup_8h_source.html \
    docs/html/alarmstrategy_8h.html \
    docs/html/alarmstrategy_8h_source.html \
    docs/html/alarmstrategyowner_8h.html \
    docs/html/alarmstrategyowner_8h_source.html \
    docs/html/annotated.html \
    docs/html/callfiremen_8h.html \
    docs/html/callfiremen_8h_source.html \
    docs/html/callpolice_8h.html \
    docs/html/callpolice_8h_source.html \
    docs/html/classAbstractSensor-members.html \
    docs/html/classAbstractSensor.html \
    docs/html/classAlarmComponent-members.html \
    docs/html/classAlarmComponent.html \
    docs/html/classAlarmComponentGroup-members.html \
    docs/html/classAlarmComponentGroup.html \
    docs/html/classAlarmStrategy-members.html \
    docs/html/classAlarmStrategy.html \
    docs/html/classAlarmStrategyOwner-members.html \
    docs/html/classAlarmStrategyOwner.html \
    docs/html/classCallFiremen-members.html \
    docs/html/classCallFiremen.html \
    docs/html/classCallPolice-members.html \
    docs/html/classCallPolice.html \
    docs/html/classes.html \
    docs/html/classMotionSensor-members.html \
    docs/html/classMotionSensor.html \
    docs/html/classSmokeSensor-members.html \
    docs/html/classSmokeSensor.html \
    docs/html/classToxicSensor-members.html \
    docs/html/classToxicSensor.html \
    docs/html/files.html \
    docs/html/functions.html \
    docs/html/functions_enum.html \
    docs/html/functions_func.html \
    docs/html/functions_vars.html \
    docs/html/graph_legend.html \
    docs/html/group__AlarmComposite.html \
    docs/html/group__AlarmSensors.html \
    docs/html/group__AlarmStrategies.html \
    docs/html/hierarchy.html \
    docs/html/index.html \
    docs/html/inherits.html \
    docs/html/md_README.html \
    docs/html/modules.html \
    docs/html/motionsensor_8h.html \
    docs/html/motionsensor_8h_source.html \
    docs/html/pages.html \
    docs/html/smokesensor_8h.html \
    docs/html/smokesensor_8h_source.html \
    docs/html/toxicsensor_8h.html \
    docs/html/toxicsensor_8h_source.html \
    docs/html/abstractsensor_8h__dep__incl.map \
    docs/html/abstractsensor_8h__dep__incl.md5 \
    docs/html/abstractsensor_8h__incl.map \
    docs/html/abstractsensor_8h__incl.md5 \
    docs/html/alarmcomponent_8h__dep__incl.map \
    docs/html/alarmcomponent_8h__dep__incl.md5 \
    docs/html/alarmcomponent_8h__incl.map \
    docs/html/alarmcomponent_8h__incl.md5 \
    docs/html/alarmcomponentgroup_8h__incl.map \
    docs/html/alarmcomponentgroup_8h__incl.md5 \
    docs/html/alarmstrategy_8h__dep__incl.map \
    docs/html/alarmstrategy_8h__dep__incl.md5 \
    docs/html/alarmstrategy_8h__incl.map \
    docs/html/alarmstrategy_8h__incl.md5 \
    docs/html/alarmstrategyowner_8h__dep__incl.map \
    docs/html/alarmstrategyowner_8h__dep__incl.md5 \
    docs/html/alarmstrategyowner_8h__incl.map \
    docs/html/alarmstrategyowner_8h__incl.md5 \
    docs/html/callfiremen_8h__incl.map \
    docs/html/callfiremen_8h__incl.md5 \
    docs/html/callpolice_8h__incl.map \
    docs/html/callpolice_8h__incl.md5 \
    docs/html/classAbstractSensor__coll__graph.map \
    docs/html/classAbstractSensor__coll__graph.md5 \
    docs/html/classAbstractSensor__inherit__graph.map \
    docs/html/classAbstractSensor__inherit__graph.md5 \
    docs/html/classAlarmComponent__inherit__graph.map \
    docs/html/classAlarmComponent__inherit__graph.md5 \
    docs/html/classAlarmComponentGroup__coll__graph.map \
    docs/html/classAlarmComponentGroup__coll__graph.md5 \
    docs/html/classAlarmComponentGroup__inherit__graph.map \
    docs/html/classAlarmComponentGroup__inherit__graph.md5 \
    docs/html/classAlarmStrategy__inherit__graph.map \
    docs/html/classAlarmStrategy__inherit__graph.md5 \
    docs/html/classAlarmStrategyOwner__inherit__graph.map \
    docs/html/classAlarmStrategyOwner__inherit__graph.md5 \
    docs/html/classCallFiremen__coll__graph.map \
    docs/html/classCallFiremen__coll__graph.md5 \
    docs/html/classCallFiremen__inherit__graph.map \
    docs/html/classCallFiremen__inherit__graph.md5 \
    docs/html/classCallPolice__coll__graph.map \
    docs/html/classCallPolice__coll__graph.md5 \
    docs/html/classCallPolice__inherit__graph.map \
    docs/html/classCallPolice__inherit__graph.md5 \
    docs/html/classMotionSensor__coll__graph.map \
    docs/html/classMotionSensor__coll__graph.md5 \
    docs/html/classMotionSensor__inherit__graph.map \
    docs/html/classMotionSensor__inherit__graph.md5 \
    docs/html/classSmokeSensor__coll__graph.map \
    docs/html/classSmokeSensor__coll__graph.md5 \
    docs/html/classSmokeSensor__inherit__graph.map \
    docs/html/classSmokeSensor__inherit__graph.md5 \
    docs/html/classToxicSensor__coll__graph.map \
    docs/html/classToxicSensor__coll__graph.md5 \
    docs/html/classToxicSensor__inherit__graph.map \
    docs/html/classToxicSensor__inherit__graph.md5 \
    docs/html/graph_legend.md5 \
    docs/html/group__AlarmComposite.map \
    docs/html/group__AlarmComposite.md5 \
    docs/html/group__AlarmSensors.map \
    docs/html/group__AlarmSensors.md5 \
    docs/html/inherit_graph_0.map \
    docs/html/inherit_graph_0.md5 \
    docs/html/inherit_graph_1.map \
    docs/html/inherit_graph_1.md5 \
    docs/html/motionsensor_8h__incl.map \
    docs/html/motionsensor_8h__incl.md5 \
    docs/html/smokesensor_8h__incl.map \
    docs/html/smokesensor_8h__incl.md5 \
    docs/html/toxicsensor_8h__incl.map \
    docs/html/toxicsensor_8h__incl.md5 \
    docs/latex/abstractsensor_8h__dep__incl.md5 \
    docs/latex/abstractsensor_8h__incl.md5 \
    docs/latex/alarmcomponent_8h__dep__incl.md5 \
    docs/latex/alarmcomponent_8h__incl.md5 \
    docs/latex/alarmcomponentgroup_8h__incl.md5 \
    docs/latex/alarmstrategy_8h__dep__incl.md5 \
    docs/latex/alarmstrategy_8h__incl.md5 \
    docs/latex/alarmstrategyowner_8h__dep__incl.md5 \
    docs/latex/alarmstrategyowner_8h__incl.md5 \
    docs/latex/callfiremen_8h__incl.md5 \
    docs/latex/callpolice_8h__incl.md5 \
    docs/latex/classAbstractSensor__coll__graph.md5 \
    docs/latex/classAbstractSensor__inherit__graph.md5 \
    docs/latex/classAlarmComponent__inherit__graph.md5 \
    docs/latex/classAlarmComponentGroup__coll__graph.md5 \
    docs/latex/classAlarmComponentGroup__inherit__graph.md5 \
    docs/latex/classAlarmStrategy__inherit__graph.md5 \
    docs/latex/classAlarmStrategyOwner__inherit__graph.md5 \
    docs/latex/classCallFiremen__coll__graph.md5 \
    docs/latex/classCallFiremen__inherit__graph.md5 \
    docs/latex/classCallPolice__coll__graph.md5 \
    docs/latex/classCallPolice__inherit__graph.md5 \
    docs/latex/classMotionSensor__coll__graph.md5 \
    docs/latex/classMotionSensor__inherit__graph.md5 \
    docs/latex/classSmokeSensor__coll__graph.md5 \
    docs/latex/classSmokeSensor__inherit__graph.md5 \
    docs/latex/classToxicSensor__coll__graph.md5 \
    docs/latex/classToxicSensor__inherit__graph.md5 \
    docs/latex/group__AlarmComposite.md5 \
    docs/latex/group__AlarmSensors.md5 \
    docs/latex/motionsensor_8h__incl.md5 \
    docs/latex/smokesensor_8h__incl.md5 \
    docs/latex/toxicsensor_8h__incl.md5 \
    docs/latex/abstractsensor_8h.tex \
    docs/latex/alarmcomponent_8h.tex \
    docs/latex/alarmcomponentgroup_8h.tex \
    docs/latex/alarmstrategy_8h.tex \
    docs/latex/alarmstrategyowner_8h.tex \
    docs/latex/annotated.tex \
    docs/latex/callfiremen_8h.tex \
    docs/latex/callpolice_8h.tex \
    docs/latex/classAbstractSensor.tex \
    docs/latex/classAlarmComponent.tex \
    docs/latex/classAlarmComponentGroup.tex \
    docs/latex/classAlarmStrategy.tex \
    docs/latex/classAlarmStrategyOwner.tex \
    docs/latex/classCallFiremen.tex \
    docs/latex/classCallPolice.tex \
    docs/latex/classMotionSensor.tex \
    docs/latex/classSmokeSensor.tex \
    docs/latex/classToxicSensor.tex \
    docs/latex/doxygen.sty \
    docs/latex/files.tex \
    docs/latex/group__AlarmComposite.tex \
    docs/latex/group__AlarmSensors.tex \
    docs/latex/group__AlarmStrategies.tex \
    docs/latex/hierarchy.tex \
    docs/latex/md_README.tex \
    docs/latex/modules.tex \
    docs/latex/motionsensor_8h.tex \
    docs/latex/refman.tex \
    docs/latex/smokesensor_8h.tex \
    docs/latex/toxicsensor_8h.tex \
    doxygen.conf \
    docs/html/search/all_0.js \
    docs/html/search/all_1.js \
    docs/html/search/all_2.js \
    docs/html/search/all_3.js \
    docs/html/search/all_4.js \
    docs/html/search/all_5.js \
    docs/html/search/all_6.js \
    docs/html/search/all_7.js \
    docs/html/search/all_8.js \
    docs/html/search/all_9.js \
    docs/html/search/all_a.js \
    docs/html/search/all_b.js \
    docs/html/search/classes_0.js \
    docs/html/search/classes_1.js \
    docs/html/search/classes_2.js \
    docs/html/search/classes_3.js \
    docs/html/search/classes_4.js \
    docs/html/search/enums_0.js \
    docs/html/search/files_0.js \
    docs/html/search/files_1.js \
    docs/html/search/files_2.js \
    docs/html/search/files_3.js \
    docs/html/search/files_4.js \
    docs/html/search/functions_0.js \
    docs/html/search/functions_1.js \
    docs/html/search/functions_2.js \
    docs/html/search/functions_3.js \
    docs/html/search/functions_4.js \
    docs/html/search/functions_5.js \
    docs/html/search/functions_6.js \
    docs/html/search/functions_7.js \
    docs/html/search/functions_8.js \
    docs/html/search/functions_9.js \
    docs/html/search/groups_0.js \
    docs/html/search/pages_0.js \
    docs/html/search/search.js \
    docs/html/search/searchdata.js \
    docs/html/search/variables_0.js \
    docs/html/search/variables_1.js \
    docs/html/search/variables_2.js \
    docs/html/dynsections.js \
    docs/html/jquery.js \
    docs/latex/abstractsensor_8h__dep__incl.pdf \
    docs/latex/abstractsensor_8h__incl.pdf \
    docs/latex/alarmcomponent_8h__dep__incl.pdf \
    docs/latex/alarmcomponent_8h__incl.pdf \
    docs/latex/alarmcomponentgroup_8h__incl.pdf \
    docs/latex/alarmstrategy_8h__dep__incl.pdf \
    docs/latex/alarmstrategy_8h__incl.pdf \
    docs/latex/alarmstrategyowner_8h__dep__incl.pdf \
    docs/latex/alarmstrategyowner_8h__incl.pdf \
    docs/latex/callfiremen_8h__incl.pdf \
    docs/latex/callpolice_8h__incl.pdf \
    docs/latex/classAbstractSensor__coll__graph.pdf \
    docs/latex/classAbstractSensor__inherit__graph.pdf \
    docs/latex/classAlarmComponent__coll__graph.pdf \
    docs/latex/classAlarmComponent__inherit__graph.pdf \
    docs/latex/classAlarmComponentGroup__coll__graph.pdf \
    docs/latex/classAlarmComponentGroup__inherit__graph.pdf \
    docs/latex/classAlarmStrategy__inherit__graph.pdf \
    docs/latex/classAlarmStrategyOwner__inherit__graph.pdf \
    docs/latex/classCallFiremen__coll__graph.pdf \
    docs/latex/classCallFiremen__inherit__graph.pdf \
    docs/latex/classCallPolice__coll__graph.pdf \
    docs/latex/classCallPolice__inherit__graph.pdf \
    docs/latex/classMotionSensor__coll__graph.pdf \
    docs/latex/classMotionSensor__inherit__graph.pdf \
    docs/latex/classSmokeSensor__coll__graph.pdf \
    docs/latex/classSmokeSensor__inherit__graph.pdf \
    docs/latex/classToxicSensor__coll__graph.pdf \
    docs/latex/classToxicSensor__inherit__graph.pdf \
    docs/latex/dir_11e6dc7e0283bb6670d81be19983c8f4_dep.pdf \
    docs/latex/group__AlarmComposite.pdf \
    docs/latex/group__AlarmSensors.pdf \
    docs/latex/motionsensor_8h__incl.pdf \
    docs/latex/smokesensor_8h__incl.pdf \
    docs/latex/toxicsensor_8h__incl.pdf \
    docs/html/search/close.png \
    docs/html/search/mag_sel.png \
    docs/html/search/search_l.png \
    docs/html/search/search_m.png \
    docs/html/search/search_r.png \
    docs/html/abstractsensor_8h__dep__incl.png \
    docs/html/abstractsensor_8h__incl.png \
    docs/html/alarmcomponent_8h__dep__incl.png \
    docs/html/alarmcomponent_8h__incl.png \
    docs/html/alarmcomponentgroup_8h__incl.png \
    docs/html/alarmstrategy_8h__dep__incl.png \
    docs/html/alarmstrategy_8h__incl.png \
    docs/html/alarmstrategyowner_8h__dep__incl.png \
    docs/html/alarmstrategyowner_8h__incl.png \
    docs/html/arrowdown.png \
    docs/html/arrowright.png \
    docs/html/bc_s.png \
    docs/html/bdwn.png \
    docs/html/callfiremen_8h__incl.png \
    docs/html/callpolice_8h__incl.png \
    docs/html/classAbstractSensor__coll__graph.png \
    docs/html/classAbstractSensor__inherit__graph.png \
    docs/html/classAlarmComponent__coll__graph.png \
    docs/html/classAlarmComponent__inherit__graph.png \
    docs/html/classAlarmComponentGroup__coll__graph.png \
    docs/html/classAlarmComponentGroup__inherit__graph.png \
    docs/html/classAlarmStrategy__inherit__graph.png \
    docs/html/classAlarmStrategyOwner__inherit__graph.png \
    docs/html/classCallFiremen__coll__graph.png \
    docs/html/classCallFiremen__inherit__graph.png \
    docs/html/classCallPolice__coll__graph.png \
    docs/html/classCallPolice__inherit__graph.png \
    docs/html/classMotionSensor__coll__graph.png \
    docs/html/classMotionSensor__inherit__graph.png \
    docs/html/classSmokeSensor__coll__graph.png \
    docs/html/classSmokeSensor__inherit__graph.png \
    docs/html/classToxicSensor__coll__graph.png \
    docs/html/classToxicSensor__inherit__graph.png \
    docs/html/closed.png \
    docs/html/dir_11e6dc7e0283bb6670d81be19983c8f4_dep.png \
    docs/html/doc.png \
    docs/html/doxygen.png \
    docs/html/folderclosed.png \
    docs/html/folderopen.png \
    docs/html/graph_legend.png \
    docs/html/group__AlarmComposite.png \
    docs/html/group__AlarmSensors.png \
    docs/html/inherit_graph_0.png \
    docs/html/inherit_graph_1.png \
    docs/html/motionsensor_8h__incl.png \
    docs/html/nav_f.png \
    docs/html/nav_g.png \
    docs/html/nav_h.png \
    docs/html/open.png \
    docs/html/smokesensor_8h__incl.png \
    docs/html/splitbar.png \
    docs/html/sync_off.png \
    docs/html/sync_on.png \
    docs/html/tab_a.png \
    docs/html/tab_b.png \
    docs/html/tab_h.png \
    docs/html/tab_s.png \
    docs/html/toxicsensor_8h__incl.png \
    docs/html/search/search.css \
    docs/html/doxygen.css \
    docs/html/tabs.css \
    docs/html/search/all_0.html \
    docs/html/search/all_1.html \
    docs/html/search/all_2.html \
    docs/html/search/all_3.html \
    docs/html/search/all_4.html \
    docs/html/search/all_5.html \
    docs/html/search/all_6.html \
    docs/html/search/all_7.html \
    docs/html/search/all_8.html \
    docs/html/search/all_9.html \
    docs/html/search/all_a.html \
    docs/html/search/all_b.html \
    docs/html/search/classes_0.html \
    docs/html/search/classes_1.html \
    docs/html/search/classes_2.html \
    docs/html/search/classes_3.html \
    docs/html/search/classes_4.html \
    docs/html/search/enums_0.html \
    docs/html/search/files_0.html \
    docs/html/search/files_1.html \
    docs/html/search/files_2.html \
    docs/html/search/files_3.html \
    docs/html/search/files_4.html \
    docs/html/search/functions_0.html \
    docs/html/search/functions_1.html \
    docs/html/search/functions_2.html \
    docs/html/search/functions_3.html \
    docs/html/search/functions_4.html \
    docs/html/search/functions_5.html \
    docs/html/search/functions_6.html \
    docs/html/search/functions_7.html \
    docs/html/search/functions_8.html \
    docs/html/search/functions_9.html \
    docs/html/search/groups_0.html \
    docs/html/search/nomatches.html \
    docs/html/search/pages_0.html \
    docs/html/search/variables_0.html \
    docs/html/search/variables_1.html \
    docs/html/search/variables_2.html \
    docs/html/abstractsensor_8h.html \
    docs/html/abstractsensor_8h_source.html \
    docs/html/alarmcomponent_8h.html \
    docs/html/alarmcomponent_8h_source.html \
    docs/html/alarmcomponentgroup_8h.html \
    docs/html/alarmcomponentgroup_8h_source.html \
    docs/html/alarmstrategy_8h.html \
    docs/html/alarmstrategy_8h_source.html \
    docs/html/alarmstrategyowner_8h.html \
    docs/html/alarmstrategyowner_8h_source.html \
    docs/html/annotated.html \
    docs/html/callfiremen_8h.html \
    docs/html/callfiremen_8h_source.html \
    docs/html/callpolice_8h.html \
    docs/html/callpolice_8h_source.html \
    docs/html/classAbstractSensor-members.html \
    docs/html/classAbstractSensor.html \
    docs/html/classAlarmComponent-members.html \
    docs/html/classAlarmComponent.html \
    docs/html/classAlarmComponentGroup-members.html \
    docs/html/classAlarmComponentGroup.html \
    docs/html/classAlarmStrategy-members.html \
    docs/html/classAlarmStrategy.html \
    docs/html/classAlarmStrategyOwner-members.html \
    docs/html/classAlarmStrategyOwner.html \
    docs/html/classCallFiremen-members.html \
    docs/html/classCallFiremen.html \
    docs/html/classCallPolice-members.html \
    docs/html/classCallPolice.html \
    docs/html/classes.html \
    docs/html/classMotionSensor-members.html \
    docs/html/classMotionSensor.html \
    docs/html/classSmokeSensor-members.html \
    docs/html/classSmokeSensor.html \
    docs/html/classToxicSensor-members.html \
    docs/html/classToxicSensor.html \
    docs/html/dir_000001_000000.html \
    docs/html/dir_000001_000002.html \
    docs/html/dir_11e6dc7e0283bb6670d81be19983c8f4.html \
    docs/html/dir_69b1c6e8687eaaa00440cfc8519dc295.html \
    docs/html/dir_7da1ae6129c9b529e3fa91984d1ee71a.html \
    docs/html/files.html \
    docs/html/functions.html \
    docs/html/functions_enum.html \
    docs/html/functions_func.html \
    docs/html/functions_vars.html \
    docs/html/globals.html \
    docs/html/globals_func.html \
    docs/html/graph_legend.html \
    docs/html/group__AlarmComposite.html \
    docs/html/group__AlarmSensors.html \
    docs/html/group__AlarmStrategies.html \
    docs/html/hierarchy.html \
    docs/html/index.html \
    docs/html/inherits.html \
    docs/html/md_README.html \
    docs/html/modules.html \
    docs/html/motionsensor_8h.html \
    docs/html/motionsensor_8h_source.html \
    docs/html/pages.html \
    docs/html/smokesensor_8h.html \
    docs/html/smokesensor_8h_source.html \
    docs/html/toxicsensor_8h.html \
    docs/html/toxicsensor_8h_source.html \
    docs/html/abstractsensor_8h__dep__incl.map \
    docs/html/abstractsensor_8h__dep__incl.md5 \
    docs/html/abstractsensor_8h__incl.map \
    docs/html/abstractsensor_8h__incl.md5 \
    docs/html/alarmcomponent_8h__dep__incl.map \
    docs/html/alarmcomponent_8h__dep__incl.md5 \
    docs/html/alarmcomponent_8h__incl.map \
    docs/html/alarmcomponent_8h__incl.md5 \
    docs/html/alarmcomponentgroup_8h__incl.map \
    docs/html/alarmcomponentgroup_8h__incl.md5 \
    docs/html/alarmstrategy_8h__dep__incl.map \
    docs/html/alarmstrategy_8h__dep__incl.md5 \
    docs/html/alarmstrategy_8h__incl.map \
    docs/html/alarmstrategy_8h__incl.md5 \
    docs/html/alarmstrategyowner_8h__dep__incl.map \
    docs/html/alarmstrategyowner_8h__dep__incl.md5 \
    docs/html/alarmstrategyowner_8h__incl.map \
    docs/html/alarmstrategyowner_8h__incl.md5 \
    docs/html/callfiremen_8h__incl.map \
    docs/html/callfiremen_8h__incl.md5 \
    docs/html/callpolice_8h__incl.map \
    docs/html/callpolice_8h__incl.md5 \
    docs/html/classAbstractSensor__coll__graph.map \
    docs/html/classAbstractSensor__coll__graph.md5 \
    docs/html/classAbstractSensor__inherit__graph.map \
    docs/html/classAbstractSensor__inherit__graph.md5 \
    docs/html/classAlarmComponent__coll__graph.map \
    docs/html/classAlarmComponent__coll__graph.md5 \
    docs/html/classAlarmComponent__inherit__graph.map \
    docs/html/classAlarmComponent__inherit__graph.md5 \
    docs/html/classAlarmComponentGroup__coll__graph.map \
    docs/html/classAlarmComponentGroup__coll__graph.md5 \
    docs/html/classAlarmComponentGroup__inherit__graph.map \
    docs/html/classAlarmComponentGroup__inherit__graph.md5 \
    docs/html/classAlarmStrategy__inherit__graph.map \
    docs/html/classAlarmStrategy__inherit__graph.md5 \
    docs/html/classAlarmStrategyOwner__inherit__graph.map \
    docs/html/classAlarmStrategyOwner__inherit__graph.md5 \
    docs/html/classCallFiremen__coll__graph.map \
    docs/html/classCallFiremen__coll__graph.md5 \
    docs/html/classCallFiremen__inherit__graph.map \
    docs/html/classCallFiremen__inherit__graph.md5 \
    docs/html/classCallPolice__coll__graph.map \
    docs/html/classCallPolice__coll__graph.md5 \
    docs/html/classCallPolice__inherit__graph.map \
    docs/html/classCallPolice__inherit__graph.md5 \
    docs/html/classMotionSensor__coll__graph.map \
    docs/html/classMotionSensor__coll__graph.md5 \
    docs/html/classMotionSensor__inherit__graph.map \
    docs/html/classMotionSensor__inherit__graph.md5 \
    docs/html/classSmokeSensor__coll__graph.map \
    docs/html/classSmokeSensor__coll__graph.md5 \
    docs/html/classSmokeSensor__inherit__graph.map \
    docs/html/classSmokeSensor__inherit__graph.md5 \
    docs/html/classToxicSensor__coll__graph.map \
    docs/html/classToxicSensor__coll__graph.md5 \
    docs/html/classToxicSensor__inherit__graph.map \
    docs/html/classToxicSensor__inherit__graph.md5 \
    docs/html/dir_11e6dc7e0283bb6670d81be19983c8f4_dep.map \
    docs/html/dir_11e6dc7e0283bb6670d81be19983c8f4_dep.md5 \
    docs/html/graph_legend.md5 \
    docs/html/group__AlarmComposite.map \
    docs/html/group__AlarmComposite.md5 \
    docs/html/group__AlarmSensors.map \
    docs/html/group__AlarmSensors.md5 \
    docs/html/inherit_graph_0.map \
    docs/html/inherit_graph_0.md5 \
    docs/html/inherit_graph_1.map \
    docs/html/inherit_graph_1.md5 \
    docs/html/motionsensor_8h__incl.map \
    docs/html/motionsensor_8h__incl.md5 \
    docs/html/smokesensor_8h__incl.map \
    docs/html/smokesensor_8h__incl.md5 \
    docs/html/toxicsensor_8h__incl.map \
    docs/html/toxicsensor_8h__incl.md5 \
    docs/latex/abstractsensor_8h__dep__incl.md5 \
    docs/latex/abstractsensor_8h__incl.md5 \
    docs/latex/alarmcomponent_8h__dep__incl.md5 \
    docs/latex/alarmcomponent_8h__incl.md5 \
    docs/latex/alarmcomponentgroup_8h__incl.md5 \
    docs/latex/alarmstrategy_8h__dep__incl.md5 \
    docs/latex/alarmstrategy_8h__incl.md5 \
    docs/latex/alarmstrategyowner_8h__dep__incl.md5 \
    docs/latex/alarmstrategyowner_8h__incl.md5 \
    docs/latex/callfiremen_8h__incl.md5 \
    docs/latex/callpolice_8h__incl.md5 \
    docs/latex/classAbstractSensor__coll__graph.md5 \
    docs/latex/classAbstractSensor__inherit__graph.md5 \
    docs/latex/classAlarmComponent__coll__graph.md5 \
    docs/latex/classAlarmComponent__inherit__graph.md5 \
    docs/latex/classAlarmComponentGroup__coll__graph.md5 \
    docs/latex/classAlarmComponentGroup__inherit__graph.md5 \
    docs/latex/classAlarmStrategy__inherit__graph.md5 \
    docs/latex/classAlarmStrategyOwner__inherit__graph.md5 \
    docs/latex/classCallFiremen__coll__graph.md5 \
    docs/latex/classCallFiremen__inherit__graph.md5 \
    docs/latex/classCallPolice__coll__graph.md5 \
    docs/latex/classCallPolice__inherit__graph.md5 \
    docs/latex/classMotionSensor__coll__graph.md5 \
    docs/latex/classMotionSensor__inherit__graph.md5 \
    docs/latex/classSmokeSensor__coll__graph.md5 \
    docs/latex/classSmokeSensor__inherit__graph.md5 \
    docs/latex/classToxicSensor__coll__graph.md5 \
    docs/latex/classToxicSensor__inherit__graph.md5 \
    docs/latex/dir_11e6dc7e0283bb6670d81be19983c8f4_dep.md5 \
    docs/latex/group__AlarmComposite.md5 \
    docs/latex/group__AlarmSensors.md5 \
    docs/latex/motionsensor_8h__incl.md5 \
    docs/latex/smokesensor_8h__incl.md5 \
    docs/latex/toxicsensor_8h__incl.md5 \
    docs/latex/abstractsensor_8h.tex \
    docs/latex/alarmcomponent_8h.tex \
    docs/latex/alarmcomponentgroup_8h.tex \
    docs/latex/alarmstrategy_8h.tex \
    docs/latex/alarmstrategyowner_8h.tex \
    docs/latex/annotated.tex \
    docs/latex/callfiremen_8h.tex \
    docs/latex/callpolice_8h.tex \
    docs/latex/classAbstractSensor.tex \
    docs/latex/classAlarmComponent.tex \
    docs/latex/classAlarmComponentGroup.tex \
    docs/latex/classAlarmStrategy.tex \
    docs/latex/classAlarmStrategyOwner.tex \
    docs/latex/classCallFiremen.tex \
    docs/latex/classCallPolice.tex \
    docs/latex/classMotionSensor.tex \
    docs/latex/classSmokeSensor.tex \
    docs/latex/classToxicSensor.tex \
    docs/latex/dir_11e6dc7e0283bb6670d81be19983c8f4.tex \
    docs/latex/dir_69b1c6e8687eaaa00440cfc8519dc295.tex \
    docs/latex/dir_7da1ae6129c9b529e3fa91984d1ee71a.tex \
    docs/latex/doxygen.sty \
    docs/latex/files.tex \
    docs/latex/group__AlarmComposite.tex \
    docs/latex/group__AlarmSensors.tex \
    docs/latex/group__AlarmStrategies.tex \
    docs/latex/hierarchy.tex \
    docs/latex/md_README.tex \
    docs/latex/modules.tex \
    docs/latex/motionsensor_8h.tex \
    docs/latex/refman.tex \
    docs/latex/smokesensor_8h.tex \
    docs/latex/toxicsensor_8h.tex
